// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerShooterPlugin/Public/MultiplayerPlayerCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DamageEvents.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerPlayerCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimationMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	MULTIPLAYERSHOOTERPLUGIN_API UClass* Z_Construct_UClass_AMultiplayerGunMasterClass_NoRegister();
	MULTIPLAYERSHOOTERPLUGIN_API UClass* Z_Construct_UClass_AMultiplayerPlayerCharacter();
	MULTIPLAYERSHOOTERPLUGIN_API UClass* Z_Construct_UClass_AMultiplayerPlayerCharacter_NoRegister();
	MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerDieReplication();
	MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetRidOfWeaponsReplication();
	MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGiveWeapon1Replication();
	MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGiveWeapon2Replication();
	MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerRespawnReplication();
	MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons1Replication();
	MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons2Replication();
	MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerSwitchWeaponsReplication();
	UPackage* Z_Construct_UPackage__Script_MultiplayerShooterPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon1Replication;
class UScriptStruct* FMultiplayerGiveWeapon1Replication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon1Replication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon1Replication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGiveWeapon1Replication, (UObject*)Z_Construct_UPackage__Script_MultiplayerShooterPlugin(), TEXT("MultiplayerGiveWeapon1Replication"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon1Replication.OuterSingleton;
}
template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<FMultiplayerGiveWeapon1Replication>()
{
	return FMultiplayerGiveWeapon1Replication::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayerGiveWeapon1Replication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGiveWeapon1Replication_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGiveWeapon1Replication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGiveWeapon1Replication>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGiveWeapon1Replication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
		nullptr,
		&NewStructOps,
		"MultiplayerGiveWeapon1Replication",
		nullptr,
		0,
		sizeof(FMultiplayerGiveWeapon1Replication),
		alignof(FMultiplayerGiveWeapon1Replication),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGiveWeapon1Replication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiplayerGiveWeapon1Replication_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGiveWeapon1Replication()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon1Replication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon1Replication.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayerGiveWeapon1Replication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon1Replication.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon2Replication;
class UScriptStruct* FMultiplayerGiveWeapon2Replication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon2Replication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon2Replication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGiveWeapon2Replication, (UObject*)Z_Construct_UPackage__Script_MultiplayerShooterPlugin(), TEXT("MultiplayerGiveWeapon2Replication"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon2Replication.OuterSingleton;
}
template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<FMultiplayerGiveWeapon2Replication>()
{
	return FMultiplayerGiveWeapon2Replication::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayerGiveWeapon2Replication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGiveWeapon2Replication_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGiveWeapon2Replication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGiveWeapon2Replication>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGiveWeapon2Replication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
		nullptr,
		&NewStructOps,
		"MultiplayerGiveWeapon2Replication",
		nullptr,
		0,
		sizeof(FMultiplayerGiveWeapon2Replication),
		alignof(FMultiplayerGiveWeapon2Replication),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGiveWeapon2Replication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiplayerGiveWeapon2Replication_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGiveWeapon2Replication()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon2Replication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon2Replication.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayerGiveWeapon2Replication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon2Replication.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeaponsReplication;
class UScriptStruct* FMultiplayerSwitchWeaponsReplication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeaponsReplication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeaponsReplication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerSwitchWeaponsReplication, (UObject*)Z_Construct_UPackage__Script_MultiplayerShooterPlugin(), TEXT("MultiplayerSwitchWeaponsReplication"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeaponsReplication.OuterSingleton;
}
template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<FMultiplayerSwitchWeaponsReplication>()
{
	return FMultiplayerSwitchWeaponsReplication::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayerSwitchWeaponsReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerSwitchWeaponsReplication_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerSwitchWeaponsReplication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerSwitchWeaponsReplication>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerSwitchWeaponsReplication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
		nullptr,
		&NewStructOps,
		"MultiplayerSwitchWeaponsReplication",
		nullptr,
		0,
		sizeof(FMultiplayerSwitchWeaponsReplication),
		alignof(FMultiplayerSwitchWeaponsReplication),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerSwitchWeaponsReplication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiplayerSwitchWeaponsReplication_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerSwitchWeaponsReplication()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeaponsReplication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeaponsReplication.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayerSwitchWeaponsReplication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeaponsReplication.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons1Replication;
class UScriptStruct* FMultiplayerSwitchWeapons1Replication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons1Replication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons1Replication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons1Replication, (UObject*)Z_Construct_UPackage__Script_MultiplayerShooterPlugin(), TEXT("MultiplayerSwitchWeapons1Replication"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons1Replication.OuterSingleton;
}
template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<FMultiplayerSwitchWeapons1Replication>()
{
	return FMultiplayerSwitchWeapons1Replication::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons1Replication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons1Replication_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons1Replication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerSwitchWeapons1Replication>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons1Replication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
		nullptr,
		&NewStructOps,
		"MultiplayerSwitchWeapons1Replication",
		nullptr,
		0,
		sizeof(FMultiplayerSwitchWeapons1Replication),
		alignof(FMultiplayerSwitchWeapons1Replication),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons1Replication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons1Replication_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons1Replication()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons1Replication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons1Replication.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons1Replication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons1Replication.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons2Replication;
class UScriptStruct* FMultiplayerSwitchWeapons2Replication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons2Replication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons2Replication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons2Replication, (UObject*)Z_Construct_UPackage__Script_MultiplayerShooterPlugin(), TEXT("MultiplayerSwitchWeapons2Replication"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons2Replication.OuterSingleton;
}
template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<FMultiplayerSwitchWeapons2Replication>()
{
	return FMultiplayerSwitchWeapons2Replication::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons2Replication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons2Replication_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons2Replication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerSwitchWeapons2Replication>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons2Replication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
		nullptr,
		&NewStructOps,
		"MultiplayerSwitchWeapons2Replication",
		nullptr,
		0,
		sizeof(FMultiplayerSwitchWeapons2Replication),
		alignof(FMultiplayerSwitchWeapons2Replication),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons2Replication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons2Replication_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons2Replication()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons2Replication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons2Replication.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons2Replication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons2Replication.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayerRespawnReplication;
class UScriptStruct* FMultiplayerRespawnReplication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayerRespawnReplication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayerRespawnReplication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerRespawnReplication, (UObject*)Z_Construct_UPackage__Script_MultiplayerShooterPlugin(), TEXT("MultiplayerRespawnReplication"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayerRespawnReplication.OuterSingleton;
}
template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<FMultiplayerRespawnReplication>()
{
	return FMultiplayerRespawnReplication::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayerRespawnReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerRespawnReplication_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerRespawnReplication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerRespawnReplication>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerRespawnReplication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
		nullptr,
		&NewStructOps,
		"MultiplayerRespawnReplication",
		nullptr,
		0,
		sizeof(FMultiplayerRespawnReplication),
		alignof(FMultiplayerRespawnReplication),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRespawnReplication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiplayerRespawnReplication_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerRespawnReplication()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayerRespawnReplication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayerRespawnReplication.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayerRespawnReplication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayerRespawnReplication.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayerGetRidOfWeaponsReplication;
class UScriptStruct* FMultiplayerGetRidOfWeaponsReplication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayerGetRidOfWeaponsReplication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayerGetRidOfWeaponsReplication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGetRidOfWeaponsReplication, (UObject*)Z_Construct_UPackage__Script_MultiplayerShooterPlugin(), TEXT("MultiplayerGetRidOfWeaponsReplication"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayerGetRidOfWeaponsReplication.OuterSingleton;
}
template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<FMultiplayerGetRidOfWeaponsReplication>()
{
	return FMultiplayerGetRidOfWeaponsReplication::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayerGetRidOfWeaponsReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetRidOfWeaponsReplication_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGetRidOfWeaponsReplication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGetRidOfWeaponsReplication>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGetRidOfWeaponsReplication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
		nullptr,
		&NewStructOps,
		"MultiplayerGetRidOfWeaponsReplication",
		nullptr,
		0,
		sizeof(FMultiplayerGetRidOfWeaponsReplication),
		alignof(FMultiplayerGetRidOfWeaponsReplication),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetRidOfWeaponsReplication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiplayerGetRidOfWeaponsReplication_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetRidOfWeaponsReplication()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayerGetRidOfWeaponsReplication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayerGetRidOfWeaponsReplication.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayerGetRidOfWeaponsReplication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayerGetRidOfWeaponsReplication.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayerDieReplication;
class UScriptStruct* FMultiplayerDieReplication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayerDieReplication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayerDieReplication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerDieReplication, (UObject*)Z_Construct_UPackage__Script_MultiplayerShooterPlugin(), TEXT("MultiplayerDieReplication"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayerDieReplication.OuterSingleton;
}
template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<FMultiplayerDieReplication>()
{
	return FMultiplayerDieReplication::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayerDieReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerDieReplication_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerDieReplication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerDieReplication>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerDieReplication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
		nullptr,
		&NewStructOps,
		"MultiplayerDieReplication",
		nullptr,
		0,
		sizeof(FMultiplayerDieReplication),
		alignof(FMultiplayerDieReplication),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerDieReplication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiplayerDieReplication_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerDieReplication()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayerDieReplication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayerDieReplication.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayerDieReplication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayerDieReplication.InnerSingleton;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execOnRep_DieReplication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DieReplication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execOnRep_GetRidOfWeaponsReplication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GetRidOfWeaponsReplication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execOnRep_RespawnReplication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RespawnReplication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execOnRep_SwitchWeapons2Replication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SwitchWeapons2Replication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execOnRep_SwitchWeapons1Replication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SwitchWeapons1Replication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execOnRep_SwitchWeaponsReplication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SwitchWeaponsReplication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execOnRep_GiveWeapon2Replication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GiveWeapon2Replication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execOnRep_GiveWeapon1Replication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GiveWeapon1Replication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execReload2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execReload1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execServerSwitchWeapons2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSwitchWeapons2_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerSwitchWeapons2_Validate"));
			return;
		}
		P_THIS->ServerSwitchWeapons2_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execSwitchWeapons2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchWeapons2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execServerSwitchWeapons1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSwitchWeapons1_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerSwitchWeapons1_Validate"));
			return;
		}
		P_THIS->ServerSwitchWeapons1_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execSwitchWeapons1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchWeapons1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execServerSwitchWeapons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSwitchWeapons_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerSwitchWeapons_Validate"));
			return;
		}
		P_THIS->ServerSwitchWeapons_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execSwitchWeapons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchWeapons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execServerGetRidOfWeapons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerGetRidOfWeapons_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerGetRidOfWeapons_Validate"));
			return;
		}
		P_THIS->ServerGetRidOfWeapons_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execGetRidOfWeapons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRidOfWeapons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execServerGiveWeapon2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerGiveWeapon2_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerGiveWeapon2_Validate"));
			return;
		}
		P_THIS->ServerGiveWeapon2_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execGiveWeapon2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveWeapon2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execServerGiveWeapon1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerGiveWeapon1_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerGiveWeapon1_Validate"));
			return;
		}
		P_THIS->ServerGiveWeapon1_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execGiveWeapon1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveWeapon1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execServerRespawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerRespawn_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerRespawn_Validate"));
			return;
		}
		P_THIS->ServerRespawn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execRespawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Respawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execAutoHealthRegen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoHealthRegen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execServerDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerDie_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerDie_Validate"));
			return;
		}
		P_THIS->ServerDie_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_Damage,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execLookUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUp(Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn(Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerPlayerCharacter::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Scale);
		P_NATIVE_END;
	}
	struct MultiplayerPlayerCharacter_eventPlayArmsAnimation_BP_Parms
	{
		UAnimationAsset* Animation;
		bool bLooping;
	};
	struct MultiplayerPlayerCharacter_eventSetArmsAnimationMode_BP_Parms
	{
		TEnumAsByte<EAnimationMode::Type> AnimationMode;
	};
	struct MultiplayerPlayerCharacter_eventSetWeapon1Hidden_BP_Parms
	{
		bool Hidden;
	};
	struct MultiplayerPlayerCharacter_eventSetWeapon2Hidden_BP_Parms
	{
		bool Hidden;
	};
	struct MultiplayerPlayerCharacter_eventTick_BP_Parms
	{
		float DeltaTime;
	};
	static FName NAME_AMultiplayerPlayerCharacter_BeginPlay_BP = FName(TEXT("BeginPlay_BP"));
	void AMultiplayerPlayerCharacter::BeginPlay_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_BeginPlay_BP),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_Die_BP = FName(TEXT("Die_BP"));
	void AMultiplayerPlayerCharacter::Die_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_Die_BP),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_Fire_BP = FName(TEXT("Fire_BP"));
	void AMultiplayerPlayerCharacter::Fire_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_Fire_BP),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP = FName(TEXT("PlayArmsAnimation_BP"));
	void AMultiplayerPlayerCharacter::PlayArmsAnimation_BP(UAnimationAsset* Animation, bool bLooping)
	{
		MultiplayerPlayerCharacter_eventPlayArmsAnimation_BP_Parms Parms;
		Parms.Animation=Animation;
		Parms.bLooping=bLooping ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP),&Parms);
	}
	static FName NAME_AMultiplayerPlayerCharacter_Respawn_BP = FName(TEXT("Respawn_BP"));
	void AMultiplayerPlayerCharacter::Respawn_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_Respawn_BP),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_ServerDie = FName(TEXT("ServerDie"));
	void AMultiplayerPlayerCharacter::ServerDie()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_ServerDie),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_ServerGetRidOfWeapons = FName(TEXT("ServerGetRidOfWeapons"));
	void AMultiplayerPlayerCharacter::ServerGetRidOfWeapons()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_ServerGetRidOfWeapons),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_ServerGiveWeapon1 = FName(TEXT("ServerGiveWeapon1"));
	void AMultiplayerPlayerCharacter::ServerGiveWeapon1()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_ServerGiveWeapon1),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_ServerGiveWeapon2 = FName(TEXT("ServerGiveWeapon2"));
	void AMultiplayerPlayerCharacter::ServerGiveWeapon2()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_ServerGiveWeapon2),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_ServerRespawn = FName(TEXT("ServerRespawn"));
	void AMultiplayerPlayerCharacter::ServerRespawn()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_ServerRespawn),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_ServerSwitchWeapons = FName(TEXT("ServerSwitchWeapons"));
	void AMultiplayerPlayerCharacter::ServerSwitchWeapons()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_ServerSwitchWeapons),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_ServerSwitchWeapons1 = FName(TEXT("ServerSwitchWeapons1"));
	void AMultiplayerPlayerCharacter::ServerSwitchWeapons1()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_ServerSwitchWeapons1),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_ServerSwitchWeapons2 = FName(TEXT("ServerSwitchWeapons2"));
	void AMultiplayerPlayerCharacter::ServerSwitchWeapons2()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_ServerSwitchWeapons2),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP = FName(TEXT("SetArmsAnimationMode_BP"));
	void AMultiplayerPlayerCharacter::SetArmsAnimationMode_BP(EAnimationMode::Type AnimationMode)
	{
		MultiplayerPlayerCharacter_eventSetArmsAnimationMode_BP_Parms Parms;
		Parms.AnimationMode=AnimationMode;
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP),&Parms);
	}
	static FName NAME_AMultiplayerPlayerCharacter_SetPlayerModelForWeapons_BP = FName(TEXT("SetPlayerModelForWeapons_BP"));
	void AMultiplayerPlayerCharacter::SetPlayerModelForWeapons_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_SetPlayerModelForWeapons_BP),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP = FName(TEXT("SetWeapon1Hidden_BP"));
	void AMultiplayerPlayerCharacter::SetWeapon1Hidden_BP(bool Hidden)
	{
		MultiplayerPlayerCharacter_eventSetWeapon1Hidden_BP_Parms Parms;
		Parms.Hidden=Hidden ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP),&Parms);
	}
	static FName NAME_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP = FName(TEXT("SetWeapon2Hidden_BP"));
	void AMultiplayerPlayerCharacter::SetWeapon2Hidden_BP(bool Hidden)
	{
		MultiplayerPlayerCharacter_eventSetWeapon2Hidden_BP_Parms Parms;
		Parms.Hidden=Hidden ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP),&Parms);
	}
	static FName NAME_AMultiplayerPlayerCharacter_ShowDefaultPluginHUD_BP = FName(TEXT("ShowDefaultPluginHUD_BP"));
	void AMultiplayerPlayerCharacter::ShowDefaultPluginHUD_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_ShowDefaultPluginHUD_BP),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_StopFiring_BP = FName(TEXT("StopFiring_BP"));
	void AMultiplayerPlayerCharacter::StopFiring_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_StopFiring_BP),NULL);
	}
	static FName NAME_AMultiplayerPlayerCharacter_Tick_BP = FName(TEXT("Tick_BP"));
	void AMultiplayerPlayerCharacter::Tick_BP(float DeltaTime)
	{
		MultiplayerPlayerCharacter_eventTick_BP_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerPlayerCharacter_Tick_BP),&Parms);
	}
	void AMultiplayerPlayerCharacter::StaticRegisterNativesAMultiplayerPlayerCharacter()
	{
		UClass* Class = AMultiplayerPlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoHealthRegen", &AMultiplayerPlayerCharacter::execAutoHealthRegen },
			{ "Die", &AMultiplayerPlayerCharacter::execDie },
			{ "Fire", &AMultiplayerPlayerCharacter::execFire },
			{ "GetRidOfWeapons", &AMultiplayerPlayerCharacter::execGetRidOfWeapons },
			{ "GiveWeapon1", &AMultiplayerPlayerCharacter::execGiveWeapon1 },
			{ "GiveWeapon2", &AMultiplayerPlayerCharacter::execGiveWeapon2 },
			{ "LookUp", &AMultiplayerPlayerCharacter::execLookUp },
			{ "MoveForward", &AMultiplayerPlayerCharacter::execMoveForward },
			{ "MoveRight", &AMultiplayerPlayerCharacter::execMoveRight },
			{ "OnRep_DieReplication", &AMultiplayerPlayerCharacter::execOnRep_DieReplication },
			{ "OnRep_GetRidOfWeaponsReplication", &AMultiplayerPlayerCharacter::execOnRep_GetRidOfWeaponsReplication },
			{ "OnRep_GiveWeapon1Replication", &AMultiplayerPlayerCharacter::execOnRep_GiveWeapon1Replication },
			{ "OnRep_GiveWeapon2Replication", &AMultiplayerPlayerCharacter::execOnRep_GiveWeapon2Replication },
			{ "OnRep_RespawnReplication", &AMultiplayerPlayerCharacter::execOnRep_RespawnReplication },
			{ "OnRep_SwitchWeapons1Replication", &AMultiplayerPlayerCharacter::execOnRep_SwitchWeapons1Replication },
			{ "OnRep_SwitchWeapons2Replication", &AMultiplayerPlayerCharacter::execOnRep_SwitchWeapons2Replication },
			{ "OnRep_SwitchWeaponsReplication", &AMultiplayerPlayerCharacter::execOnRep_SwitchWeaponsReplication },
			{ "Reload", &AMultiplayerPlayerCharacter::execReload },
			{ "Reload1", &AMultiplayerPlayerCharacter::execReload1 },
			{ "Reload2", &AMultiplayerPlayerCharacter::execReload2 },
			{ "Respawn", &AMultiplayerPlayerCharacter::execRespawn },
			{ "ServerDie", &AMultiplayerPlayerCharacter::execServerDie },
			{ "ServerGetRidOfWeapons", &AMultiplayerPlayerCharacter::execServerGetRidOfWeapons },
			{ "ServerGiveWeapon1", &AMultiplayerPlayerCharacter::execServerGiveWeapon1 },
			{ "ServerGiveWeapon2", &AMultiplayerPlayerCharacter::execServerGiveWeapon2 },
			{ "ServerRespawn", &AMultiplayerPlayerCharacter::execServerRespawn },
			{ "ServerSwitchWeapons", &AMultiplayerPlayerCharacter::execServerSwitchWeapons },
			{ "ServerSwitchWeapons1", &AMultiplayerPlayerCharacter::execServerSwitchWeapons1 },
			{ "ServerSwitchWeapons2", &AMultiplayerPlayerCharacter::execServerSwitchWeapons2 },
			{ "SwitchWeapons", &AMultiplayerPlayerCharacter::execSwitchWeapons },
			{ "SwitchWeapons1", &AMultiplayerPlayerCharacter::execSwitchWeapons1 },
			{ "SwitchWeapons2", &AMultiplayerPlayerCharacter::execSwitchWeapons2 },
			{ "TakeDamage", &AMultiplayerPlayerCharacter::execTakeDamage },
			{ "Turn", &AMultiplayerPlayerCharacter::execTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_AutoHealthRegen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_AutoHealthRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_AutoHealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "AutoHealthRegen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_AutoHealthRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_AutoHealthRegen_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_AutoHealthRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_AutoHealthRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_BeginPlay_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_BeginPlay_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this in blueprints to avoid overriding C++ begin play\n" },
#endif
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this in blueprints to avoid overriding C++ begin play" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_BeginPlay_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "BeginPlay_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_BeginPlay_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_BeginPlay_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_BeginPlay_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_BeginPlay_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "Die", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "Die_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "Fire_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_GetRidOfWeapons_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_GetRidOfWeapons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_GetRidOfWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "GetRidOfWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_GetRidOfWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_GetRidOfWeapons_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_GetRidOfWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_GetRidOfWeapons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "GiveWeapon1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon1_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "GiveWeapon2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon2_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics
	{
		struct MultiplayerPlayerCharacter_eventLookUp_Parms
		{
			float Scale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerCharacter_eventLookUp_Parms, Scale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "LookUp", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics::MultiplayerPlayerCharacter_eventLookUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics::MultiplayerPlayerCharacter_eventLookUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics
	{
		struct MultiplayerPlayerCharacter_eventMoveForward_Parms
		{
			float Scale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerCharacter_eventMoveForward_Parms, Scale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "MoveForward", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics::MultiplayerPlayerCharacter_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics::MultiplayerPlayerCharacter_eventMoveForward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics
	{
		struct MultiplayerPlayerCharacter_eventMoveRight_Parms
		{
			float Scale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerCharacter_eventMoveRight_Parms, Scale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "MoveRight", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics::MultiplayerPlayerCharacter_eventMoveRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics::MultiplayerPlayerCharacter_eventMoveRight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_DieReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_DieReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_DieReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "OnRep_DieReplication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_DieReplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_DieReplication_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_DieReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_DieReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GetRidOfWeaponsReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GetRidOfWeaponsReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GetRidOfWeaponsReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "OnRep_GetRidOfWeaponsReplication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GetRidOfWeaponsReplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GetRidOfWeaponsReplication_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GetRidOfWeaponsReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GetRidOfWeaponsReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon1Replication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon1Replication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon1Replication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "OnRep_GiveWeapon1Replication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon1Replication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon1Replication_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon1Replication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon1Replication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon2Replication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon2Replication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon2Replication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "OnRep_GiveWeapon2Replication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon2Replication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon2Replication_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon2Replication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon2Replication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_RespawnReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_RespawnReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_RespawnReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "OnRep_RespawnReplication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_RespawnReplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_RespawnReplication_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_RespawnReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_RespawnReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons1Replication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons1Replication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons1Replication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "OnRep_SwitchWeapons1Replication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons1Replication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons1Replication_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons1Replication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons1Replication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons2Replication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons2Replication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons2Replication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "OnRep_SwitchWeapons2Replication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons2Replication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons2Replication_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons2Replication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons2Replication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeaponsReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeaponsReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeaponsReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "OnRep_SwitchWeaponsReplication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeaponsReplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeaponsReplication_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeaponsReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeaponsReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerCharacter_eventPlayArmsAnimation_BP_Parms, Animation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((MultiplayerPlayerCharacter_eventPlayArmsAnimation_BP_Parms*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerCharacter_eventPlayArmsAnimation_BP_Parms), &Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::NewProp_bLooping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "PlayArmsAnimation_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::PropPointers), sizeof(MultiplayerPlayerCharacter_eventPlayArmsAnimation_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::PropPointers) < 2048);
	static_assert(sizeof(MultiplayerPlayerCharacter_eventPlayArmsAnimation_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "Reload1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload1_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "Reload2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload2_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "Respawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "Respawn_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerDie_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerDie_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "ServerDie", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerDie_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerDie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerDie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGetRidOfWeapons_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGetRidOfWeapons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGetRidOfWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "ServerGetRidOfWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGetRidOfWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGetRidOfWeapons_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGetRidOfWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGetRidOfWeapons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "ServerGiveWeapon1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon1_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "ServerGiveWeapon2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon2_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerRespawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerRespawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerRespawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "ServerRespawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerRespawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerRespawn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerRespawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerRespawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "ServerSwitchWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "ServerSwitchWeapons1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons1_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "ServerSwitchWeapons2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons2_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP_Statics::NewProp_AnimationMode = { "AnimationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerCharacter_eventSetArmsAnimationMode_BP_Parms, AnimationMode), Z_Construct_UEnum_Engine_EAnimationMode, METADATA_PARAMS(0, nullptr) }; // 2648205393
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP_Statics::NewProp_AnimationMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "SetArmsAnimationMode_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP_Statics::PropPointers), sizeof(MultiplayerPlayerCharacter_eventSetArmsAnimationMode_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP_Statics::PropPointers) < 2048);
	static_assert(sizeof(MultiplayerPlayerCharacter_eventSetArmsAnimationMode_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetPlayerModelForWeapons_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetPlayerModelForWeapons_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetPlayerModelForWeapons_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "SetPlayerModelForWeapons_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetPlayerModelForWeapons_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetPlayerModelForWeapons_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetPlayerModelForWeapons_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetPlayerModelForWeapons_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics
	{
		static void NewProp_Hidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Hidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics::NewProp_Hidden_SetBit(void* Obj)
	{
		((MultiplayerPlayerCharacter_eventSetWeapon1Hidden_BP_Parms*)Obj)->Hidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics::NewProp_Hidden = { "Hidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerCharacter_eventSetWeapon1Hidden_BP_Parms), &Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics::NewProp_Hidden_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics::NewProp_Hidden,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "SetWeapon1Hidden_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics::PropPointers), sizeof(MultiplayerPlayerCharacter_eventSetWeapon1Hidden_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics::PropPointers) < 2048);
	static_assert(sizeof(MultiplayerPlayerCharacter_eventSetWeapon1Hidden_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics
	{
		static void NewProp_Hidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Hidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics::NewProp_Hidden_SetBit(void* Obj)
	{
		((MultiplayerPlayerCharacter_eventSetWeapon2Hidden_BP_Parms*)Obj)->Hidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics::NewProp_Hidden = { "Hidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerCharacter_eventSetWeapon2Hidden_BP_Parms), &Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics::NewProp_Hidden_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics::NewProp_Hidden,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "SetWeapon2Hidden_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics::PropPointers), sizeof(MultiplayerPlayerCharacter_eventSetWeapon2Hidden_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics::PropPointers) < 2048);
	static_assert(sizeof(MultiplayerPlayerCharacter_eventSetWeapon2Hidden_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_ShowDefaultPluginHUD_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_ShowDefaultPluginHUD_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_ShowDefaultPluginHUD_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "ShowDefaultPluginHUD_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_ShowDefaultPluginHUD_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_ShowDefaultPluginHUD_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_ShowDefaultPluginHUD_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_ShowDefaultPluginHUD_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_StopFiring_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_StopFiring_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_StopFiring_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "StopFiring_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_StopFiring_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_StopFiring_BP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_StopFiring_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_StopFiring_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "SwitchWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "SwitchWeapons1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons1_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "SwitchWeapons2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons2_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics
	{
		struct MultiplayerPlayerCharacter_eventTakeDamage_Parms
		{
			float Damage;
			FDamageEvent DamageEvent;
			AController* EventInstigator;
			AActor* DamageCauser;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerCharacter_eventTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerCharacter_eventTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData), Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData) }; // 4174483363
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerCharacter_eventTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerCharacter_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerCharacter_eventTakeDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::NewProp_DamageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::NewProp_EventInstigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::NewProp_DamageCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::MultiplayerPlayerCharacter_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::MultiplayerPlayerCharacter_eventTakeDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerCharacter_eventTick_BP_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this in blueprints to avoid overriding C++ Tick\n" },
#endif
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this in blueprints to avoid overriding C++ Tick" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "Tick_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP_Statics::PropPointers), sizeof(MultiplayerPlayerCharacter_eventTick_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP_Statics::PropPointers) < 2048);
	static_assert(sizeof(MultiplayerPlayerCharacter_eventTick_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics
	{
		struct MultiplayerPlayerCharacter_eventTurn_Parms
		{
			float Scale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerCharacter_eventTurn_Parms, Scale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerCharacter, nullptr, "Turn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics::MultiplayerPlayerCharacter_eventTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics::MultiplayerPlayerCharacter_eventTurn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerPlayerCharacter);
	UClass* Z_Construct_UClass_AMultiplayerPlayerCharacter_NoRegister()
	{
		return AMultiplayerPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultPluginHUD_MetaData[];
#endif
		static void NewProp_bUseDefaultPluginHUD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultPluginHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HealthRegenAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenTickRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRegenTickRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenInitialDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRegenInitialDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanShoot_MetaData[];
#endif
		static void NewProp_bCanShoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanShoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeapon1_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWeapon1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeapon2_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWeapon2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerBPCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerBPCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponBeingUsed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponBeingUsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanSwitchWeapons_MetaData[];
#endif
		static void NewProp_bCanSwitchWeapons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSwitchWeapons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfTimeToSwitchWeapons_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmountOfTimeToSwitchWeapons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayAnimationOnEveryWeaponSwitch_MetaData[];
#endif
		static void NewProp_bPlayAnimationOnEveryWeaponSwitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayAnimationOnEveryWeaponSwitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSwitchingWeapons_MetaData[];
#endif
		static void NewProp_bIsSwitchingWeapons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSwitchingWeapons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[];
#endif
		static void NewProp_bIsReloading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchWeaponsAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchWeaponsAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchWeaponsAnimation1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchWeaponsAnimation1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonSwitchWeaponsAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonSwitchWeaponsAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonSwitchWeaponsAnimation1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonSwitchWeaponsAnimation1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimation1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimation1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GiveWeapon1Replication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GiveWeapon1Replication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GiveWeapon2Replication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GiveWeapon2Replication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchWeaponsReplication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchWeaponsReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchWeapons1Replication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchWeapons1Replication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchWeapons2Replication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchWeapons2Replication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnReplication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RespawnReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetRidOfWeaponsReplication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GetRidOfWeaponsReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DieReplication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DieReplication;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooterPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_AutoHealthRegen, "AutoHealthRegen" }, // 4149614515
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_BeginPlay_BP, "BeginPlay_BP" }, // 2284571901
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die, "Die" }, // 3877395718
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_Die_BP, "Die_BP" }, // 1846330696
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire, "Fire" }, // 3718023165
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_Fire_BP, "Fire_BP" }, // 760398963
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_GetRidOfWeapons, "GetRidOfWeapons" }, // 2822935507
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon1, "GiveWeapon1" }, // 3454170498
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_GiveWeapon2, "GiveWeapon2" }, // 1999326577
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_LookUp, "LookUp" }, // 2326029465
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveForward, "MoveForward" }, // 4230626886
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_MoveRight, "MoveRight" }, // 1701498651
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_DieReplication, "OnRep_DieReplication" }, // 2574454161
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GetRidOfWeaponsReplication, "OnRep_GetRidOfWeaponsReplication" }, // 309511968
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon1Replication, "OnRep_GiveWeapon1Replication" }, // 392345721
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_GiveWeapon2Replication, "OnRep_GiveWeapon2Replication" }, // 2822514970
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_RespawnReplication, "OnRep_RespawnReplication" }, // 608271845
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons1Replication, "OnRep_SwitchWeapons1Replication" }, // 3022439652
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeapons2Replication, "OnRep_SwitchWeapons2Replication" }, // 4083501358
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_OnRep_SwitchWeaponsReplication, "OnRep_SwitchWeaponsReplication" }, // 3563706339
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_PlayArmsAnimation_BP, "PlayArmsAnimation_BP" }, // 1194334751
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload, "Reload" }, // 2764702222
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload1, "Reload1" }, // 3427235569
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_Reload2, "Reload2" }, // 737611004
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn, "Respawn" }, // 819866633
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_Respawn_BP, "Respawn_BP" }, // 2436094879
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerDie, "ServerDie" }, // 1800693132
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGetRidOfWeapons, "ServerGetRidOfWeapons" }, // 404435546
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon1, "ServerGiveWeapon1" }, // 367194358
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerGiveWeapon2, "ServerGiveWeapon2" }, // 3099459406
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerRespawn, "ServerRespawn" }, // 3655343214
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons, "ServerSwitchWeapons" }, // 3957786857
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons1, "ServerSwitchWeapons1" }, // 2412572934
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_ServerSwitchWeapons2, "ServerSwitchWeapons2" }, // 2681461523
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetArmsAnimationMode_BP, "SetArmsAnimationMode_BP" }, // 2990289049
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetPlayerModelForWeapons_BP, "SetPlayerModelForWeapons_BP" }, // 4146549780
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon1Hidden_BP, "SetWeapon1Hidden_BP" }, // 1921265211
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_SetWeapon2Hidden_BP, "SetWeapon2Hidden_BP" }, // 374052459
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_ShowDefaultPluginHUD_BP, "ShowDefaultPluginHUD_BP" }, // 88585665
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_StopFiring_BP, "StopFiring_BP" }, // 1590620114
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons, "SwitchWeapons" }, // 3800373786
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons1, "SwitchWeapons1" }, // 3514133037
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_SwitchWeapons2, "SwitchWeapons2" }, // 3225184242
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_TakeDamage, "TakeDamage" }, // 172745454
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_Tick_BP, "Tick_BP" }, // 252429710
		{ &Z_Construct_UFunction_AMultiplayerPlayerCharacter_Turn, "Turn" }, // 3001077058
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MultiplayerPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bUseDefaultPluginHUD_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bUseDefaultPluginHUD_SetBit(void* Obj)
	{
		((AMultiplayerPlayerCharacter*)Obj)->bUseDefaultPluginHUD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bUseDefaultPluginHUD = { "bUseDefaultPluginHUD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerCharacter), &Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bUseDefaultPluginHUD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bUseDefaultPluginHUD_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bUseDefaultPluginHUD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Health_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_RespawnDelay_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_RespawnDelay = { "RespawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, RespawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_RespawnDelay_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_RespawnDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenAmount_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "The amount of health to regenerate on each tick" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenAmount = { "HealthRegenAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, HealthRegenAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenAmount_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenTickRate_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "The amount of time between each tick" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenTickRate = { "HealthRegenTickRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, HealthRegenTickRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenTickRate_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenTickRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenInitialDelay_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenInitialDelay = { "HealthRegenInitialDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, HealthRegenInitialDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenInitialDelay_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenInitialDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanShoot_MetaData[] = {
		{ "Category", "Guns" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanShoot_SetBit(void* Obj)
	{
		((AMultiplayerPlayerCharacter*)Obj)->bCanShoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanShoot = { "bCanShoot", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerCharacter), &Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanShoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanShoot_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanShoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Weapon1_MetaData[] = {
		{ "Category", "Guns" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Weapon1 = { "Weapon1", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, Weapon1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Weapon1_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Weapon1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Weapon2_MetaData[] = {
		{ "Category", "Guns" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Weapon2 = { "Weapon2", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, Weapon2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Weapon2_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Weapon2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_CameraLocation_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_CameraLocation_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_CameraLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_CameraRotation_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_CameraRotation_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_CameraRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DefaultWeapon1_MetaData[] = {
		{ "Category", "Guns" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "This will be weapon 1" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DefaultWeapon1 = { "DefaultWeapon1", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, DefaultWeapon1), Z_Construct_UClass_UClass, Z_Construct_UClass_AMultiplayerGunMasterClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DefaultWeapon1_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DefaultWeapon1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DefaultWeapon2_MetaData[] = {
		{ "Category", "Guns" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "This will be weapon 2" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DefaultWeapon2 = { "DefaultWeapon2", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, DefaultWeapon2), Z_Construct_UClass_UClass, Z_Construct_UClass_AMultiplayerGunMasterClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DefaultWeapon2_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DefaultWeapon2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_PlayerBPCamera_MetaData[] = {
		{ "Category", "Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// There were some issues having the camera be a C++ component so I made it a blueprint component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "There were some issues having the camera be a C++ component so I made it a blueprint component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_PlayerBPCamera = { "PlayerBPCamera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, PlayerBPCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_PlayerBPCamera_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_PlayerBPCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_WeaponBeingUsed_MetaData[] = {
		{ "Category", "Guns" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_WeaponBeingUsed = { "WeaponBeingUsed", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, WeaponBeingUsed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_WeaponBeingUsed_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_WeaponBeingUsed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanSwitchWeapons_MetaData[] = {
		{ "Category", "Guns" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanSwitchWeapons_SetBit(void* Obj)
	{
		((AMultiplayerPlayerCharacter*)Obj)->bCanSwitchWeapons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanSwitchWeapons = { "bCanSwitchWeapons", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerCharacter), &Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanSwitchWeapons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanSwitchWeapons_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanSwitchWeapons_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_AmountOfTimeToSwitchWeapons_MetaData[] = {
		{ "Category", "Guns" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "How long it takes to switch weapons" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_AmountOfTimeToSwitchWeapons = { "AmountOfTimeToSwitchWeapons", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, AmountOfTimeToSwitchWeapons), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_AmountOfTimeToSwitchWeapons_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_AmountOfTimeToSwitchWeapons_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bPlayAnimationOnEveryWeaponSwitch_MetaData[] = {
		{ "Category", "Guns" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "If true weapon switch animation will restart if you switch weapons rapidly" },
#endif
	};
#endif
	void Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bPlayAnimationOnEveryWeaponSwitch_SetBit(void* Obj)
	{
		((AMultiplayerPlayerCharacter*)Obj)->bPlayAnimationOnEveryWeaponSwitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bPlayAnimationOnEveryWeaponSwitch = { "bPlayAnimationOnEveryWeaponSwitch", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerCharacter), &Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bPlayAnimationOnEveryWeaponSwitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bPlayAnimationOnEveryWeaponSwitch_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bPlayAnimationOnEveryWeaponSwitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsSwitchingWeapons_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsSwitchingWeapons_SetBit(void* Obj)
	{
		((AMultiplayerPlayerCharacter*)Obj)->bIsSwitchingWeapons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsSwitchingWeapons = { "bIsSwitchingWeapons", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerCharacter), &Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsSwitchingWeapons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsSwitchingWeapons_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsSwitchingWeapons_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsReloading_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsReloading_SetBit(void* Obj)
	{
		((AMultiplayerPlayerCharacter*)Obj)->bIsReloading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerCharacter), &Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsReloading_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsReloading_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsAnimation = { "SwitchWeaponsAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, SwitchWeaponsAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsAnimation_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsAnimation1_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsAnimation1 = { "SwitchWeaponsAnimation1", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, SwitchWeaponsAnimation1), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsAnimation1_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsAnimation1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ThirdPersonSwitchWeaponsAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ThirdPersonSwitchWeaponsAnimation = { "ThirdPersonSwitchWeaponsAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, ThirdPersonSwitchWeaponsAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ThirdPersonSwitchWeaponsAnimation_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ThirdPersonSwitchWeaponsAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ThirdPersonSwitchWeaponsAnimation1_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ThirdPersonSwitchWeaponsAnimation1 = { "ThirdPersonSwitchWeaponsAnimation1", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, ThirdPersonSwitchWeaponsAnimation1), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ThirdPersonSwitchWeaponsAnimation1_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ThirdPersonSwitchWeaponsAnimation1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ReloadAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ReloadAnimation = { "ReloadAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, ReloadAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ReloadAnimation_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ReloadAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ReloadAnimation1_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ReloadAnimation1 = { "ReloadAnimation1", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, ReloadAnimation1), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ReloadAnimation1_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ReloadAnimation1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GiveWeapon1Replication_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GiveWeapon1Replication = { "GiveWeapon1Replication", "OnRep_GiveWeapon1Replication", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, GiveWeapon1Replication), Z_Construct_UScriptStruct_FMultiplayerGiveWeapon1Replication, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GiveWeapon1Replication_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GiveWeapon1Replication_MetaData) }; // 1416521890
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GiveWeapon2Replication_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GiveWeapon2Replication = { "GiveWeapon2Replication", "OnRep_GiveWeapon2Replication", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, GiveWeapon2Replication), Z_Construct_UScriptStruct_FMultiplayerGiveWeapon2Replication, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GiveWeapon2Replication_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GiveWeapon2Replication_MetaData) }; // 227715392
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsReplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsReplication = { "SwitchWeaponsReplication", "OnRep_SwitchWeaponsReplication", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, SwitchWeaponsReplication), Z_Construct_UScriptStruct_FMultiplayerSwitchWeaponsReplication, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsReplication_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsReplication_MetaData) }; // 2065513786
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeapons1Replication_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeapons1Replication = { "SwitchWeapons1Replication", "OnRep_SwitchWeapons1Replication", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, SwitchWeapons1Replication), Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons1Replication, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeapons1Replication_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeapons1Replication_MetaData) }; // 390697961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeapons2Replication_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeapons2Replication = { "SwitchWeapons2Replication", "OnRep_SwitchWeapons2Replication", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, SwitchWeapons2Replication), Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons2Replication, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeapons2Replication_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeapons2Replication_MetaData) }; // 2596386388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_RespawnReplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_RespawnReplication = { "RespawnReplication", "OnRep_RespawnReplication", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, RespawnReplication), Z_Construct_UScriptStruct_FMultiplayerRespawnReplication, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_RespawnReplication_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_RespawnReplication_MetaData) }; // 4240602540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GetRidOfWeaponsReplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GetRidOfWeaponsReplication = { "GetRidOfWeaponsReplication", "OnRep_GetRidOfWeaponsReplication", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, GetRidOfWeaponsReplication), Z_Construct_UScriptStruct_FMultiplayerGetRidOfWeaponsReplication, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GetRidOfWeaponsReplication_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GetRidOfWeaponsReplication_MetaData) }; // 489890106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DieReplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DieReplication = { "DieReplication", "OnRep_DieReplication", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerCharacter, DieReplication), Z_Construct_UScriptStruct_FMultiplayerDieReplication, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DieReplication_MetaData), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DieReplication_MetaData) }; // 3002493369
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bUseDefaultPluginHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_RespawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenTickRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_HealthRegenInitialDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanShoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Weapon1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_Weapon2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_CameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_CameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DefaultWeapon1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DefaultWeapon2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_PlayerBPCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_WeaponBeingUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bCanSwitchWeapons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_AmountOfTimeToSwitchWeapons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bPlayAnimationOnEveryWeaponSwitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsSwitchingWeapons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_bIsReloading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsAnimation1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ThirdPersonSwitchWeaponsAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ThirdPersonSwitchWeaponsAnimation1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ReloadAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_ReloadAnimation1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GiveWeapon1Replication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GiveWeapon2Replication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeaponsReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeapons1Replication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_SwitchWeapons2Replication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_RespawnReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_GetRidOfWeaponsReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::NewProp_DieReplication,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerPlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::ClassParams = {
		&AMultiplayerPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMultiplayerPlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_AMultiplayerPlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerPlayerCharacter.OuterSingleton, Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMultiplayerPlayerCharacter.OuterSingleton;
	}
	template<> MULTIPLAYERSHOOTERPLUGIN_API UClass* StaticClass<AMultiplayerPlayerCharacter>()
	{
		return AMultiplayerPlayerCharacter::StaticClass();
	}

	void AMultiplayerPlayerCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_bCanShoot(TEXT("bCanShoot"));
		static const FName Name_Weapon1(TEXT("Weapon1"));
		static const FName Name_Weapon2(TEXT("Weapon2"));
		static const FName Name_WeaponBeingUsed(TEXT("WeaponBeingUsed"));
		static const FName Name_bCanSwitchWeapons(TEXT("bCanSwitchWeapons"));
		static const FName Name_bIsSwitchingWeapons(TEXT("bIsSwitchingWeapons"));
		static const FName Name_bIsReloading(TEXT("bIsReloading"));
		static const FName Name_GiveWeapon1Replication(TEXT("GiveWeapon1Replication"));
		static const FName Name_GiveWeapon2Replication(TEXT("GiveWeapon2Replication"));
		static const FName Name_SwitchWeaponsReplication(TEXT("SwitchWeaponsReplication"));
		static const FName Name_SwitchWeapons1Replication(TEXT("SwitchWeapons1Replication"));
		static const FName Name_SwitchWeapons2Replication(TEXT("SwitchWeapons2Replication"));
		static const FName Name_RespawnReplication(TEXT("RespawnReplication"));
		static const FName Name_GetRidOfWeaponsReplication(TEXT("GetRidOfWeaponsReplication"));
		static const FName Name_DieReplication(TEXT("DieReplication"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_bCanShoot == ClassReps[(int32)ENetFields_Private::bCanShoot].Property->GetFName()
			&& Name_Weapon1 == ClassReps[(int32)ENetFields_Private::Weapon1].Property->GetFName()
			&& Name_Weapon2 == ClassReps[(int32)ENetFields_Private::Weapon2].Property->GetFName()
			&& Name_WeaponBeingUsed == ClassReps[(int32)ENetFields_Private::WeaponBeingUsed].Property->GetFName()
			&& Name_bCanSwitchWeapons == ClassReps[(int32)ENetFields_Private::bCanSwitchWeapons].Property->GetFName()
			&& Name_bIsSwitchingWeapons == ClassReps[(int32)ENetFields_Private::bIsSwitchingWeapons].Property->GetFName()
			&& Name_bIsReloading == ClassReps[(int32)ENetFields_Private::bIsReloading].Property->GetFName()
			&& Name_GiveWeapon1Replication == ClassReps[(int32)ENetFields_Private::GiveWeapon1Replication].Property->GetFName()
			&& Name_GiveWeapon2Replication == ClassReps[(int32)ENetFields_Private::GiveWeapon2Replication].Property->GetFName()
			&& Name_SwitchWeaponsReplication == ClassReps[(int32)ENetFields_Private::SwitchWeaponsReplication].Property->GetFName()
			&& Name_SwitchWeapons1Replication == ClassReps[(int32)ENetFields_Private::SwitchWeapons1Replication].Property->GetFName()
			&& Name_SwitchWeapons2Replication == ClassReps[(int32)ENetFields_Private::SwitchWeapons2Replication].Property->GetFName()
			&& Name_RespawnReplication == ClassReps[(int32)ENetFields_Private::RespawnReplication].Property->GetFName()
			&& Name_GetRidOfWeaponsReplication == ClassReps[(int32)ENetFields_Private::GetRidOfWeaponsReplication].Property->GetFName()
			&& Name_DieReplication == ClassReps[(int32)ENetFields_Private::DieReplication].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMultiplayerPlayerCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerPlayerCharacter);
	AMultiplayerPlayerCharacter::~AMultiplayerPlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_Statics::ScriptStructInfo[] = {
		{ FMultiplayerGiveWeapon1Replication::StaticStruct, Z_Construct_UScriptStruct_FMultiplayerGiveWeapon1Replication_Statics::NewStructOps, TEXT("MultiplayerGiveWeapon1Replication"), &Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon1Replication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayerGiveWeapon1Replication), 1416521890U) },
		{ FMultiplayerGiveWeapon2Replication::StaticStruct, Z_Construct_UScriptStruct_FMultiplayerGiveWeapon2Replication_Statics::NewStructOps, TEXT("MultiplayerGiveWeapon2Replication"), &Z_Registration_Info_UScriptStruct_MultiplayerGiveWeapon2Replication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayerGiveWeapon2Replication), 227715392U) },
		{ FMultiplayerSwitchWeaponsReplication::StaticStruct, Z_Construct_UScriptStruct_FMultiplayerSwitchWeaponsReplication_Statics::NewStructOps, TEXT("MultiplayerSwitchWeaponsReplication"), &Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeaponsReplication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayerSwitchWeaponsReplication), 2065513786U) },
		{ FMultiplayerSwitchWeapons1Replication::StaticStruct, Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons1Replication_Statics::NewStructOps, TEXT("MultiplayerSwitchWeapons1Replication"), &Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons1Replication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayerSwitchWeapons1Replication), 390697961U) },
		{ FMultiplayerSwitchWeapons2Replication::StaticStruct, Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons2Replication_Statics::NewStructOps, TEXT("MultiplayerSwitchWeapons2Replication"), &Z_Registration_Info_UScriptStruct_MultiplayerSwitchWeapons2Replication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayerSwitchWeapons2Replication), 2596386388U) },
		{ FMultiplayerRespawnReplication::StaticStruct, Z_Construct_UScriptStruct_FMultiplayerRespawnReplication_Statics::NewStructOps, TEXT("MultiplayerRespawnReplication"), &Z_Registration_Info_UScriptStruct_MultiplayerRespawnReplication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayerRespawnReplication), 4240602540U) },
		{ FMultiplayerGetRidOfWeaponsReplication::StaticStruct, Z_Construct_UScriptStruct_FMultiplayerGetRidOfWeaponsReplication_Statics::NewStructOps, TEXT("MultiplayerGetRidOfWeaponsReplication"), &Z_Registration_Info_UScriptStruct_MultiplayerGetRidOfWeaponsReplication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayerGetRidOfWeaponsReplication), 489890106U) },
		{ FMultiplayerDieReplication::StaticStruct, Z_Construct_UScriptStruct_FMultiplayerDieReplication_Statics::NewStructOps, TEXT("MultiplayerDieReplication"), &Z_Registration_Info_UScriptStruct_MultiplayerDieReplication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayerDieReplication), 3002493369U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerPlayerCharacter, AMultiplayerPlayerCharacter::StaticClass, TEXT("AMultiplayerPlayerCharacter"), &Z_Registration_Info_UClass_AMultiplayerPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerPlayerCharacter), 877834298U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_818505556(TEXT("/Script/MultiplayerShooterPlugin"),
		Z_CompiledInDeferFile_FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

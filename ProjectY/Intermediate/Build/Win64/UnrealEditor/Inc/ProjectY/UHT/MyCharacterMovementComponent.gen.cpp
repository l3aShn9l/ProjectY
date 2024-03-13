// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectY/MyCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterMovementComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	PROJECTY_API UClass* Z_Construct_UClass_UMyCharacterMovementComponent();
	PROJECTY_API UClass* Z_Construct_UClass_UMyCharacterMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectY();
// End Cross Module References
	DEFINE_FUNCTION(UMyCharacterMovementComponent::execSetGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GravityDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGravityDirection(Z_Param_Out_GravityDir);
		P_NATIVE_END;
	}
	void UMyCharacterMovementComponent::StaticRegisterNativesUMyCharacterMovementComponent()
	{
		UClass* Class = UMyCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGravityDirection", &UMyCharacterMovementComponent::execSetGravityDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics
	{
		struct MyCharacterMovementComponent_eventSetGravityDirection_Parms
		{
			FVector GravityDir;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GravityDir;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::NewProp_GravityDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::NewProp_GravityDir = { "GravityDir", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacterMovementComponent_eventSetGravityDirection_Parms, GravityDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::NewProp_GravityDir_MetaData), Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::NewProp_GravityDir_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::NewProp_GravityDir,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyCharacterMovementComponent, nullptr, "SetGravityDirection", nullptr, nullptr, Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::MyCharacterMovementComponent_eventSetGravityDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::MyCharacterMovementComponent_eventSetGravityDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyCharacterMovementComponent);
	UClass* Z_Construct_UClass_UMyCharacterMovementComponent_NoRegister()
	{
		return UMyCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectY,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterMovementComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyCharacterMovementComponent_SetGravityDirection, "SetGravityDirection" }, // 1984007805
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterMovementComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "MyCharacterMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyCharacterMovementComponent_Statics::ClassParams = {
		&UMyCharacterMovementComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyCharacterMovementComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UMyCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UMyCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyCharacterMovementComponent.OuterSingleton;
	}
	template<> PROJECTY_API UClass* StaticClass<UMyCharacterMovementComponent>()
	{
		return UMyCharacterMovementComponent::StaticClass();
	}
	UMyCharacterMovementComponent::UMyCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCharacterMovementComponent);
	UMyCharacterMovementComponent::~UMyCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyCharacterMovementComponent, UMyCharacterMovementComponent::StaticClass, TEXT("UMyCharacterMovementComponent"), &Z_Registration_Info_UClass_UMyCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyCharacterMovementComponent), 2738958567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_2524329595(TEXT("/Script/ProjectY"),
		Z_CompiledInDeferFile_FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

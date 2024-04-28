// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RootMovement/Public/RootMovementLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMovementLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode();
	ROOTMOVEMENT_API UClass* Z_Construct_UClass_URootMovementLibrary();
	ROOTMOVEMENT_API UClass* Z_Construct_UClass_URootMovementLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RootMovement();
// End Cross Module References
	DEFINE_FUNCTION(URootMovementLibrary::execApplyRootMotionConstantForce)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CharacterMovement);
		P_GET_STRUCT(FVector,Z_Param_WorldDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bIsAdditive);
		P_GET_OBJECT(UCurveFloat,Z_Param_StrengthOverTime);
		P_GET_ENUM(ERootMotionFinishVelocityMode,Z_Param_VelocityOnFinishMode);
		P_GET_STRUCT(FVector,Z_Param_SetVelocityOnFinish);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClampVelocityOnFinish);
		P_GET_UBOOL(Z_Param_bEnableGravity);
		P_FINISH;
		P_NATIVE_BEGIN;
		URootMovementLibrary::ApplyRootMotionConstantForce(Z_Param_WorldContext,Z_Param_CharacterMovement,Z_Param_WorldDirection,Z_Param_Strength,Z_Param_Duration,Z_Param_bIsAdditive,Z_Param_StrengthOverTime,ERootMotionFinishVelocityMode(Z_Param_VelocityOnFinishMode),Z_Param_SetVelocityOnFinish,Z_Param_ClampVelocityOnFinish,Z_Param_bEnableGravity);
		P_NATIVE_END;
	}
	void URootMovementLibrary::StaticRegisterNativesURootMovementLibrary()
	{
		UClass* Class = URootMovementLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyRootMotionConstantForce", &URootMovementLibrary::execApplyRootMotionConstantForce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics
	{
		struct RootMovementLibrary_eventApplyRootMotionConstantForce_Parms
		{
			const UObject* WorldContext;
			UCharacterMovementComponent* CharacterMovement;
			FVector WorldDirection;
			float Strength;
			float Duration;
			bool bIsAdditive;
			UCurveFloat* StrengthOverTime;
			ERootMotionFinishVelocityMode VelocityOnFinishMode;
			FVector SetVelocityOnFinish;
			float ClampVelocityOnFinish;
			bool bEnableGravity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMovement;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static void NewProp_bIsAdditive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAdditive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityOnFinishMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityOnFinishMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetVelocityOnFinish;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampVelocityOnFinish;
		static void NewProp_bEnableGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGravity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootMovementLibrary_eventApplyRootMotionConstantForce_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_WorldContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_CharacterMovement_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_CharacterMovement = { "CharacterMovement", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootMovementLibrary_eventApplyRootMotionConstantForce_Parms, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_CharacterMovement_MetaData), Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_CharacterMovement_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootMovementLibrary_eventApplyRootMotionConstantForce_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootMovementLibrary_eventApplyRootMotionConstantForce_Parms, Strength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootMovementLibrary_eventApplyRootMotionConstantForce_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive_SetBit(void* Obj)
	{
		((RootMovementLibrary_eventApplyRootMotionConstantForce_Parms*)Obj)->bIsAdditive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive = { "bIsAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RootMovementLibrary_eventApplyRootMotionConstantForce_Parms), &Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_StrengthOverTime = { "StrengthOverTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootMovementLibrary_eventApplyRootMotionConstantForce_Parms, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_VelocityOnFinishMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_VelocityOnFinishMode = { "VelocityOnFinishMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootMovementLibrary_eventApplyRootMotionConstantForce_Parms, VelocityOnFinishMode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(0, nullptr) }; // 2455918100
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_SetVelocityOnFinish = { "SetVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootMovementLibrary_eventApplyRootMotionConstantForce_Parms, SetVelocityOnFinish), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_ClampVelocityOnFinish = { "ClampVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootMovementLibrary_eventApplyRootMotionConstantForce_Parms, ClampVelocityOnFinish), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity_SetBit(void* Obj)
	{
		((RootMovementLibrary_eventApplyRootMotionConstantForce_Parms*)Obj)->bEnableGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity = { "bEnableGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RootMovementLibrary_eventApplyRootMotionConstantForce_Parms), &Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_CharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_WorldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_StrengthOverTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_VelocityOnFinishMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_VelocityOnFinishMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_SetVelocityOnFinish,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_ClampVelocityOnFinish,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "RootMovement" },
		{ "Comment", "/**\n     * Apply root motion movement to passed Character Movement Component\n     */" },
		{ "DisplayName", "Apply Root Motion Constant Force" },
		{ "Keywords", "RootMovement RootMotion Root Motion Movement" },
		{ "ModuleRelativePath", "Public/RootMovementLibrary.h" },
		{ "ToolTip", "Apply root motion movement to passed Character Movement Component" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMovementLibrary, nullptr, "ApplyRootMotionConstantForce", nullptr, nullptr, Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::RootMovementLibrary_eventApplyRootMotionConstantForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::RootMovementLibrary_eventApplyRootMotionConstantForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URootMovementLibrary);
	UClass* Z_Construct_UClass_URootMovementLibrary_NoRegister()
	{
		return URootMovementLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URootMovementLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootMovementLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RootMovement,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URootMovementLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URootMovementLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URootMovementLibrary_ApplyRootMotionConstantForce, "ApplyRootMotionConstantForce" }, // 1489735087
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URootMovementLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMovementLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "RootMovementLibrary.h" },
		{ "ModuleRelativePath", "Public/RootMovementLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMovementLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMovementLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URootMovementLibrary_Statics::ClassParams = {
		&URootMovementLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URootMovementLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URootMovementLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URootMovementLibrary()
	{
		if (!Z_Registration_Info_UClass_URootMovementLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMovementLibrary.OuterSingleton, Z_Construct_UClass_URootMovementLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URootMovementLibrary.OuterSingleton;
	}
	template<> ROOTMOVEMENT_API UClass* StaticClass<URootMovementLibrary>()
	{
		return URootMovementLibrary::StaticClass();
	}
	URootMovementLibrary::URootMovementLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMovementLibrary);
	URootMovementLibrary::~URootMovementLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_RootMovementLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_RootMovementLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URootMovementLibrary, URootMovementLibrary::StaticClass, TEXT("URootMovementLibrary"), &Z_Registration_Info_UClass_URootMovementLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMovementLibrary), 3551251604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_RootMovementLibrary_h_3653491257(TEXT("/Script/RootMovement"),
		Z_CompiledInDeferFile_FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_RootMovementLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_RootMovementLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

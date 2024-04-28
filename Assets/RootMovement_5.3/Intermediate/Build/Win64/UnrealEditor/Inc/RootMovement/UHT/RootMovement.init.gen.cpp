// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMovement_init() {}
	ROOTMOVEMENT_API UFunction* Z_Construct_UDelegateFunction_RootMovement_MovementEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RootMovement;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RootMovement()
	{
		if (!Z_Registration_Info_UPackage__Script_RootMovement.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RootMovement_MovementEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RootMovement",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x36F0000C,
				0x85203B25,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RootMovement.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RootMovement.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RootMovement(Z_Construct_UPackage__Script_RootMovement, TEXT("/Script/RootMovement"), Z_Registration_Info_UPackage__Script_RootMovement, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x36F0000C, 0x85203B25));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

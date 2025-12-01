// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThe_Gauntlet_SDC_init() {}
	THE_GAUNTLET_SDC_API UFunction* Z_Construct_UDelegateFunction_The_Gauntlet_SDC_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_The_Gauntlet_SDC;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_The_Gauntlet_SDC()
	{
		if (!Z_Registration_Info_UPackage__Script_The_Gauntlet_SDC.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_The_Gauntlet_SDC_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/The_Gauntlet_SDC",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA928E1E8,
				0xE6C7AD62,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_The_Gauntlet_SDC.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_The_Gauntlet_SDC.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_The_Gauntlet_SDC(Z_Construct_UPackage__Script_The_Gauntlet_SDC, TEXT("/Script/The_Gauntlet_SDC"), Z_Registration_Info_UPackage__Script_The_Gauntlet_SDC, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA928E1E8, 0xE6C7AD62));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

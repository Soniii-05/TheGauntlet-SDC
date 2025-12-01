// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Gauntlet_SDCGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeThe_Gauntlet_SDCGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THE_GAUNTLET_SDC_API UClass* Z_Construct_UClass_AThe_Gauntlet_SDCGameMode();
THE_GAUNTLET_SDC_API UClass* Z_Construct_UClass_AThe_Gauntlet_SDCGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_The_Gauntlet_SDC();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AThe_Gauntlet_SDCGameMode ************************************************
void AThe_Gauntlet_SDCGameMode::StaticRegisterNativesAThe_Gauntlet_SDCGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AThe_Gauntlet_SDCGameMode;
UClass* AThe_Gauntlet_SDCGameMode::GetPrivateStaticClass()
{
	using TClass = AThe_Gauntlet_SDCGameMode;
	if (!Z_Registration_Info_UClass_AThe_Gauntlet_SDCGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("The_Gauntlet_SDCGameMode"),
			Z_Registration_Info_UClass_AThe_Gauntlet_SDCGameMode.InnerSingleton,
			StaticRegisterNativesAThe_Gauntlet_SDCGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AThe_Gauntlet_SDCGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AThe_Gauntlet_SDCGameMode_NoRegister()
{
	return AThe_Gauntlet_SDCGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AThe_Gauntlet_SDCGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "The_Gauntlet_SDCGameMode.h" },
		{ "ModuleRelativePath", "The_Gauntlet_SDCGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThe_Gauntlet_SDCGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AThe_Gauntlet_SDCGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_The_Gauntlet_SDC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThe_Gauntlet_SDCGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThe_Gauntlet_SDCGameMode_Statics::ClassParams = {
	&AThe_Gauntlet_SDCGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThe_Gauntlet_SDCGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AThe_Gauntlet_SDCGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThe_Gauntlet_SDCGameMode()
{
	if (!Z_Registration_Info_UClass_AThe_Gauntlet_SDCGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThe_Gauntlet_SDCGameMode.OuterSingleton, Z_Construct_UClass_AThe_Gauntlet_SDCGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThe_Gauntlet_SDCGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThe_Gauntlet_SDCGameMode);
AThe_Gauntlet_SDCGameMode::~AThe_Gauntlet_SDCGameMode() {}
// ********** End Class AThe_Gauntlet_SDCGameMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_dices_Desktop_GIT_FORK_Unreal_Engine_TheGauntlet_SDC_The_Gauntlet_SDC_Source_The_Gauntlet_SDC_The_Gauntlet_SDCGameMode_h__Script_The_Gauntlet_SDC_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThe_Gauntlet_SDCGameMode, AThe_Gauntlet_SDCGameMode::StaticClass, TEXT("AThe_Gauntlet_SDCGameMode"), &Z_Registration_Info_UClass_AThe_Gauntlet_SDCGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThe_Gauntlet_SDCGameMode), 525474024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dices_Desktop_GIT_FORK_Unreal_Engine_TheGauntlet_SDC_The_Gauntlet_SDC_Source_The_Gauntlet_SDC_The_Gauntlet_SDCGameMode_h__Script_The_Gauntlet_SDC_3542789691(TEXT("/Script/The_Gauntlet_SDC"),
	Z_CompiledInDeferFile_FID_Users_dices_Desktop_GIT_FORK_Unreal_Engine_TheGauntlet_SDC_The_Gauntlet_SDC_Source_The_Gauntlet_SDC_The_Gauntlet_SDCGameMode_h__Script_The_Gauntlet_SDC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dices_Desktop_GIT_FORK_Unreal_Engine_TheGauntlet_SDC_The_Gauntlet_SDC_Source_The_Gauntlet_SDC_The_Gauntlet_SDCGameMode_h__Script_The_Gauntlet_SDC_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

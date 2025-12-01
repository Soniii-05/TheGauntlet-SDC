// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Gauntlet_SDCCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeThe_Gauntlet_SDCCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
THE_GAUNTLET_SDC_API UClass* Z_Construct_UClass_AThe_Gauntlet_SDCCharacter();
THE_GAUNTLET_SDC_API UClass* Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_The_Gauntlet_SDC();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AThe_Gauntlet_SDCCharacter Function DoJumpEnd ****************************
struct Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "The_Gauntlet_SDCCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AThe_Gauntlet_SDCCharacter, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThe_Gauntlet_SDCCharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class AThe_Gauntlet_SDCCharacter Function DoJumpEnd ******************************

// ********** Begin Class AThe_Gauntlet_SDCCharacter Function DoJumpStart **************************
struct Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "The_Gauntlet_SDCCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AThe_Gauntlet_SDCCharacter, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThe_Gauntlet_SDCCharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class AThe_Gauntlet_SDCCharacter Function DoJumpStart ****************************

// ********** Begin Class AThe_Gauntlet_SDCCharacter Function DoLook *******************************
struct Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics
{
	struct The_Gauntlet_SDCCharacter_eventDoLook_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles look inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "The_Gauntlet_SDCCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles look inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(The_Gauntlet_SDCCharacter_eventDoLook_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(The_Gauntlet_SDCCharacter_eventDoLook_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AThe_Gauntlet_SDCCharacter, nullptr, "DoLook", Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::The_Gauntlet_SDCCharacter_eventDoLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::The_Gauntlet_SDCCharacter_eventDoLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThe_Gauntlet_SDCCharacter::execDoLook)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoLook(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class AThe_Gauntlet_SDCCharacter Function DoLook *********************************

// ********** Begin Class AThe_Gauntlet_SDCCharacter Function DoMove *******************************
struct Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics
{
	struct The_Gauntlet_SDCCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "The_Gauntlet_SDCCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(The_Gauntlet_SDCCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(The_Gauntlet_SDCCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AThe_Gauntlet_SDCCharacter, nullptr, "DoMove", Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::The_Gauntlet_SDCCharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::The_Gauntlet_SDCCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThe_Gauntlet_SDCCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class AThe_Gauntlet_SDCCharacter Function DoMove *********************************

// ********** Begin Class AThe_Gauntlet_SDCCharacter ***********************************************
void AThe_Gauntlet_SDCCharacter::StaticRegisterNativesAThe_Gauntlet_SDCCharacter()
{
	UClass* Class = AThe_Gauntlet_SDCCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoJumpEnd", &AThe_Gauntlet_SDCCharacter::execDoJumpEnd },
		{ "DoJumpStart", &AThe_Gauntlet_SDCCharacter::execDoJumpStart },
		{ "DoLook", &AThe_Gauntlet_SDCCharacter::execDoLook },
		{ "DoMove", &AThe_Gauntlet_SDCCharacter::execDoMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AThe_Gauntlet_SDCCharacter;
UClass* AThe_Gauntlet_SDCCharacter::GetPrivateStaticClass()
{
	using TClass = AThe_Gauntlet_SDCCharacter;
	if (!Z_Registration_Info_UClass_AThe_Gauntlet_SDCCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("The_Gauntlet_SDCCharacter"),
			Z_Registration_Info_UClass_AThe_Gauntlet_SDCCharacter.InnerSingleton,
			StaticRegisterNativesAThe_Gauntlet_SDCCharacter,
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
	return Z_Registration_Info_UClass_AThe_Gauntlet_SDCCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_NoRegister()
{
	return AThe_Gauntlet_SDCCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple player-controllable third person character\n *  Implements a controllable orbiting camera\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "The_Gauntlet_SDCCharacter.h" },
		{ "ModuleRelativePath", "The_Gauntlet_SDCCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple player-controllable third person character\nImplements a controllable orbiting camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "The_Gauntlet_SDCCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "The_Gauntlet_SDCCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "The_Gauntlet_SDCCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "The_Gauntlet_SDCCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "The_Gauntlet_SDCCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse Look Input Action */" },
#endif
		{ "ModuleRelativePath", "The_Gauntlet_SDCCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpEnd, "DoJumpEnd" }, // 3470401884
		{ &Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoJumpStart, "DoJumpStart" }, // 3389948326
		{ &Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoLook, "DoLook" }, // 2807200640
		{ &Z_Construct_UFunction_AThe_Gauntlet_SDCCharacter_DoMove, "DoMove" }, // 386809887
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThe_Gauntlet_SDCCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThe_Gauntlet_SDCCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThe_Gauntlet_SDCCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThe_Gauntlet_SDCCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThe_Gauntlet_SDCCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThe_Gauntlet_SDCCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThe_Gauntlet_SDCCharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::NewProp_MouseLookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_The_Gauntlet_SDC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::ClassParams = {
	&AThe_Gauntlet_SDCCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThe_Gauntlet_SDCCharacter()
{
	if (!Z_Registration_Info_UClass_AThe_Gauntlet_SDCCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThe_Gauntlet_SDCCharacter.OuterSingleton, Z_Construct_UClass_AThe_Gauntlet_SDCCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThe_Gauntlet_SDCCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThe_Gauntlet_SDCCharacter);
AThe_Gauntlet_SDCCharacter::~AThe_Gauntlet_SDCCharacter() {}
// ********** End Class AThe_Gauntlet_SDCCharacter *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_dices_Desktop_GIT_FORK_Unreal_Engine_TheGauntlet_SDC_The_Gauntlet_SDC_Source_The_Gauntlet_SDC_The_Gauntlet_SDCCharacter_h__Script_The_Gauntlet_SDC_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThe_Gauntlet_SDCCharacter, AThe_Gauntlet_SDCCharacter::StaticClass, TEXT("AThe_Gauntlet_SDCCharacter"), &Z_Registration_Info_UClass_AThe_Gauntlet_SDCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThe_Gauntlet_SDCCharacter), 1341263224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dices_Desktop_GIT_FORK_Unreal_Engine_TheGauntlet_SDC_The_Gauntlet_SDC_Source_The_Gauntlet_SDC_The_Gauntlet_SDCCharacter_h__Script_The_Gauntlet_SDC_2832451426(TEXT("/Script/The_Gauntlet_SDC"),
	Z_CompiledInDeferFile_FID_Users_dices_Desktop_GIT_FORK_Unreal_Engine_TheGauntlet_SDC_The_Gauntlet_SDC_Source_The_Gauntlet_SDC_The_Gauntlet_SDCCharacter_h__Script_The_Gauntlet_SDC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dices_Desktop_GIT_FORK_Unreal_Engine_TheGauntlet_SDC_The_Gauntlet_SDC_Source_The_Gauntlet_SDC_The_Gauntlet_SDCCharacter_h__Script_The_Gauntlet_SDC_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectSurvive/PlayerChar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerChar() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
PROJECTSURVIVE_API UClass* Z_Construct_UClass_APlayerChar();
PROJECTSURVIVE_API UClass* Z_Construct_UClass_APlayerChar_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectSurvive();
// End Cross Module References

// Begin Class APlayerChar Function FindObject
struct Z_Construct_UFunction_APlayerChar_FindObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_FindObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "FindObject", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_FindObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_FindObject_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerChar_FindObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_FindObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execFindObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindObject();
	P_NATIVE_END;
}
// End Class APlayerChar Function FindObject

// Begin Class APlayerChar Function MoveForward
struct Z_Construct_UFunction_APlayerChar_MoveForward_Statics
{
	struct PlayerChar_eventMoveForward_Parms
	{
		float axisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerChar_MoveForward_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerChar_eventMoveForward_Parms, axisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerChar_MoveForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_MoveForward_Statics::NewProp_axisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_MoveForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "MoveForward", nullptr, nullptr, Z_Construct_UFunction_APlayerChar_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerChar_MoveForward_Statics::PlayerChar_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_MoveForward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerChar_MoveForward_Statics::PlayerChar_eventMoveForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerChar_MoveForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_MoveForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execMoveForward)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveForward(Z_Param_axisValue);
	P_NATIVE_END;
}
// End Class APlayerChar Function MoveForward

// Begin Class APlayerChar Function MoveRight
struct Z_Construct_UFunction_APlayerChar_MoveRight_Statics
{
	struct PlayerChar_eventMoveRight_Parms
	{
		float axisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerChar_MoveRight_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerChar_eventMoveRight_Parms, axisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerChar_MoveRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_MoveRight_Statics::NewProp_axisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_MoveRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "MoveRight", nullptr, nullptr, Z_Construct_UFunction_APlayerChar_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_MoveRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerChar_MoveRight_Statics::PlayerChar_eventMoveRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_MoveRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerChar_MoveRight_Statics::PlayerChar_eventMoveRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerChar_MoveRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_MoveRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execMoveRight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveRight(Z_Param_axisValue);
	P_NATIVE_END;
}
// End Class APlayerChar Function MoveRight

// Begin Class APlayerChar Function StartJump
struct Z_Construct_UFunction_APlayerChar_StartJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "StartJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_StartJump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerChar_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execStartJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump();
	P_NATIVE_END;
}
// End Class APlayerChar Function StartJump

// Begin Class APlayerChar Function StopJump
struct Z_Construct_UFunction_APlayerChar_StopJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "StopJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChar_StopJump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerChar_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChar::execStopJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump();
	P_NATIVE_END;
}
// End Class APlayerChar Function StopJump

// Begin Class APlayerChar
void APlayerChar::StaticRegisterNativesAPlayerChar()
{
	UClass* Class = APlayerChar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindObject", &APlayerChar::execFindObject },
		{ "MoveForward", &APlayerChar::execMoveForward },
		{ "MoveRight", &APlayerChar::execMoveRight },
		{ "StartJump", &APlayerChar::execStartJump },
		{ "StopJump", &APlayerChar::execStopJump },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerChar);
UClass* Z_Construct_UClass_APlayerChar_NoRegister()
{
	return APlayerChar::StaticClass();
}
struct Z_Construct_UClass_APlayerChar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerChar.h" },
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamComp_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerChar_FindObject, "FindObject" }, // 2118347077
		{ &Z_Construct_UFunction_APlayerChar_MoveForward, "MoveForward" }, // 1389377169
		{ &Z_Construct_UFunction_APlayerChar_MoveRight, "MoveRight" }, // 2504081276
		{ &Z_Construct_UFunction_APlayerChar_StartJump, "StartJump" }, // 4160331490
		{ &Z_Construct_UFunction_APlayerChar_StopJump, "StopJump" }, // 1430281185
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerChar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCamComp = { "PlayerCamComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChar, PlayerCamComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCamComp_MetaData), NewProp_PlayerCamComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerChar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCamComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerChar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectSurvive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerChar_Statics::ClassParams = {
	&APlayerChar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerChar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerChar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerChar()
{
	if (!Z_Registration_Info_UClass_APlayerChar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerChar.OuterSingleton, Z_Construct_UClass_APlayerChar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerChar.OuterSingleton;
}
template<> PROJECTSURVIVE_API UClass* StaticClass<APlayerChar>()
{
	return APlayerChar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerChar);
APlayerChar::~APlayerChar() {}
// End Class APlayerChar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerChar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerChar, APlayerChar::StaticClass, TEXT("APlayerChar"), &Z_Registration_Info_UClass_APlayerChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerChar), 3432641815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerChar_h_576578091(TEXT("/Script/ProjectSurvive"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerChar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

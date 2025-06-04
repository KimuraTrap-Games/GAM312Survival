// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectSurvive/PlayerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerWidget() {}

// Begin Cross Module References
PROJECTSURVIVE_API UClass* Z_Construct_UClass_UPlayerWidget();
PROJECTSURVIVE_API UClass* Z_Construct_UClass_UPlayerWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectSurvive();
// End Cross Module References

// Begin Class UPlayerWidget Function UpdateBars
struct PlayerWidget_eventUpdateBars_Parms
{
	float Health1;
	float Hunger1;
	float Thirst1;
	float Stamina1;
};
static const FName NAME_UPlayerWidget_UpdateBars = FName(TEXT("UpdateBars"));
void UPlayerWidget::UpdateBars(float Health1, float Hunger1, float Thirst1, float Stamina1)
{
	PlayerWidget_eventUpdateBars_Parms Parms;
	Parms.Health1=Health1;
	Parms.Hunger1=Hunger1;
	Parms.Thirst1=Thirst1;
	Parms.Stamina1=Stamina1;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerWidget_UpdateBars);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Hunger1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thirst1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::NewProp_Health1 = { "Health1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventUpdateBars_Parms, Health1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::NewProp_Hunger1 = { "Hunger1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventUpdateBars_Parms, Hunger1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::NewProp_Thirst1 = { "Thirst1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventUpdateBars_Parms, Thirst1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::NewProp_Stamina1 = { "Stamina1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventUpdateBars_Parms, Stamina1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::NewProp_Health1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::NewProp_Hunger1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::NewProp_Thirst1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::NewProp_Stamina1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "UpdateBars", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::PropPointers), sizeof(PlayerWidget_eventUpdateBars_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerWidget_eventUpdateBars_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_UpdateBars()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_UpdateBars_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPlayerWidget Function UpdateBars

// Begin Class UPlayerWidget
void UPlayerWidget::StaticRegisterNativesUPlayerWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerWidget);
UClass* Z_Construct_UClass_UPlayerWidget_NoRegister()
{
	return UPlayerWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlayerWidget.h" },
		{ "ModuleRelativePath", "PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerWidget_UpdateBars, "UpdateBars" }, // 3868245324
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectSurvive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerWidget_Statics::ClassParams = {
	&UPlayerWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton, Z_Construct_UClass_UPlayerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton;
}
template<> PROJECTSURVIVE_API UClass* StaticClass<UPlayerWidget>()
{
	return UPlayerWidget::StaticClass();
}
UPlayerWidget::UPlayerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerWidget);
UPlayerWidget::~UPlayerWidget() {}
// End Class UPlayerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerWidget, UPlayerWidget::StaticClass, TEXT("UPlayerWidget"), &Z_Registration_Info_UClass_UPlayerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerWidget), 2993718798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerWidget_h_1935909035(TEXT("/Script/ProjectSurvive"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

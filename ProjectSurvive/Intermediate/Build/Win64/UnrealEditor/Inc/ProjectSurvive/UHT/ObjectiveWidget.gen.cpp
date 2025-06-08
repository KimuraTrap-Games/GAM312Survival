// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectSurvive/ObjectiveWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveWidget() {}

// Begin Cross Module References
PROJECTSURVIVE_API UClass* Z_Construct_UClass_UObjectiveWidget();
PROJECTSURVIVE_API UClass* Z_Construct_UClass_UObjectiveWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectSurvive();
// End Cross Module References

// Begin Class UObjectiveWidget Function UpdatebuildObj
struct ObjectiveWidget_eventUpdatebuildObj_Parms
{
	float objectsBuilt;
};
static const FName NAME_UObjectiveWidget_UpdatebuildObj = FName(TEXT("UpdatebuildObj"));
void UObjectiveWidget::UpdatebuildObj(float objectsBuilt)
{
	ObjectiveWidget_eventUpdatebuildObj_Parms Parms;
	Parms.objectsBuilt=objectsBuilt;
	UFunction* Func = FindFunctionChecked(NAME_UObjectiveWidget_UpdatebuildObj);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UObjectiveWidget_UpdatebuildObj_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ObjectiveWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_objectsBuilt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UObjectiveWidget_UpdatebuildObj_Statics::NewProp_objectsBuilt = { "objectsBuilt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectiveWidget_eventUpdatebuildObj_Parms, objectsBuilt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveWidget_UpdatebuildObj_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveWidget_UpdatebuildObj_Statics::NewProp_objectsBuilt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWidget_UpdatebuildObj_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveWidget_UpdatebuildObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveWidget, nullptr, "UpdatebuildObj", nullptr, nullptr, Z_Construct_UFunction_UObjectiveWidget_UpdatebuildObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWidget_UpdatebuildObj_Statics::PropPointers), sizeof(ObjectiveWidget_eventUpdatebuildObj_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWidget_UpdatebuildObj_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectiveWidget_UpdatebuildObj_Statics::Function_MetaDataParams) };
static_assert(sizeof(ObjectiveWidget_eventUpdatebuildObj_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectiveWidget_UpdatebuildObj()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectiveWidget_UpdatebuildObj_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UObjectiveWidget Function UpdatebuildObj

// Begin Class UObjectiveWidget Function UpdatematOBJ
struct ObjectiveWidget_eventUpdatematOBJ_Parms
{
	float matsCollected;
};
static const FName NAME_UObjectiveWidget_UpdatematOBJ = FName(TEXT("UpdatematOBJ"));
void UObjectiveWidget::UpdatematOBJ(float matsCollected)
{
	ObjectiveWidget_eventUpdatematOBJ_Parms Parms;
	Parms.matsCollected=matsCollected;
	UFunction* Func = FindFunctionChecked(NAME_UObjectiveWidget_UpdatematOBJ);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UObjectiveWidget_UpdatematOBJ_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ObjectiveWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_matsCollected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UObjectiveWidget_UpdatematOBJ_Statics::NewProp_matsCollected = { "matsCollected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectiveWidget_eventUpdatematOBJ_Parms, matsCollected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveWidget_UpdatematOBJ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveWidget_UpdatematOBJ_Statics::NewProp_matsCollected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWidget_UpdatematOBJ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveWidget_UpdatematOBJ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveWidget, nullptr, "UpdatematOBJ", nullptr, nullptr, Z_Construct_UFunction_UObjectiveWidget_UpdatematOBJ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWidget_UpdatematOBJ_Statics::PropPointers), sizeof(ObjectiveWidget_eventUpdatematOBJ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWidget_UpdatematOBJ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectiveWidget_UpdatematOBJ_Statics::Function_MetaDataParams) };
static_assert(sizeof(ObjectiveWidget_eventUpdatematOBJ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectiveWidget_UpdatematOBJ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectiveWidget_UpdatematOBJ_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UObjectiveWidget Function UpdatematOBJ

// Begin Class UObjectiveWidget
void UObjectiveWidget::StaticRegisterNativesUObjectiveWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectiveWidget);
UClass* Z_Construct_UClass_UObjectiveWidget_NoRegister()
{
	return UObjectiveWidget::StaticClass();
}
struct Z_Construct_UClass_UObjectiveWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* \n*/" },
#endif
		{ "IncludePath", "ObjectiveWidget.h" },
		{ "ModuleRelativePath", "ObjectiveWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectiveWidget_UpdatebuildObj, "UpdatebuildObj" }, // 979494500
		{ &Z_Construct_UFunction_UObjectiveWidget_UpdatematOBJ, "UpdatematOBJ" }, // 768003556
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectiveWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjectiveWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectSurvive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectiveWidget_Statics::ClassParams = {
	&UObjectiveWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectiveWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectiveWidget()
{
	if (!Z_Registration_Info_UClass_UObjectiveWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectiveWidget.OuterSingleton, Z_Construct_UClass_UObjectiveWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectiveWidget.OuterSingleton;
}
template<> PROJECTSURVIVE_API UClass* StaticClass<UObjectiveWidget>()
{
	return UObjectiveWidget::StaticClass();
}
UObjectiveWidget::UObjectiveWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectiveWidget);
UObjectiveWidget::~UObjectiveWidget() {}
// End Class UObjectiveWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_ObjectiveWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectiveWidget, UObjectiveWidget::StaticClass, TEXT("UObjectiveWidget"), &Z_Registration_Info_UClass_UObjectiveWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectiveWidget), 1820293496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_ObjectiveWidget_h_628569389(TEXT("/Script/ProjectSurvive"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_ObjectiveWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_ObjectiveWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

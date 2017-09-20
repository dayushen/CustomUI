// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CustomCheckBox.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomCheckBox() {}
// Cross Module References
	CUSTOMUI_API UClass* Z_Construct_UClass_UCustomCheckBox_NoRegister();
	CUSTOMUI_API UClass* Z_Construct_UClass_UCustomCheckBox();
	UMG_API UClass* Z_Construct_UClass_UCheckBox();
	UPackage* Z_Construct_UPackage__Script_CustomUI();
// End Cross Module References
	void UCustomCheckBox::StaticRegisterNativesUCustomCheckBox()
	{
	}
	UClass* Z_Construct_UClass_UCustomCheckBox_NoRegister()
	{
		return UCustomCheckBox::StaticClass();
	}
	UClass* Z_Construct_UClass_UCustomCheckBox()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UCheckBox();
			Z_Construct_UPackage__Script_CustomUI();
			OuterClass = UCustomCheckBox::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_GCurInt = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GCurInt"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(GCurInt, UCustomCheckBox), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<UCustomCheckBox> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CustomCheckBox.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/CustomCheckBox.h"));
				MetaData->SetValue(NewProp_GCurInt, TEXT("Category"), TEXT("CustomStyle"));
				MetaData->SetValue(NewProp_GCurInt, TEXT("DisplayName"), TEXT("CustomStyle"));
				MetaData->SetValue(NewProp_GCurInt, TEXT("ModuleRelativePath"), TEXT("Public/CustomCheckBox.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomCheckBox, 3381776750);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomCheckBox(Z_Construct_UClass_UCustomCheckBox, &UCustomCheckBox::StaticClass, TEXT("/Script/CustomUI"), TEXT("UCustomCheckBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomCheckBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

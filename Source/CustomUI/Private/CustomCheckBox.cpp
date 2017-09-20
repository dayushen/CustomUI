// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomCheckBox.h"
#include "SCustomCheckBox.h"

UCustomCheckBox::UCustomCheckBox()
{
	SCustomCheckBox::FArguments SlateDefaults;
}

UCustomCheckBox::~UCustomCheckBox()
{

}

TSharedRef<SWidget> UCustomCheckBox::RebuildWidget()
{
	MyCheckbox = SNew(SCustomCheckBox)
		.OutInt(GCurInt);
	if (GetChildrenCount() > 0)
	{
		MyCheckbox->SetContent(GetContentSlot()->Content ? GetContentSlot()->Content->TakeWidget() : SNullWidget::NullWidget);
	}
	return MyCheckbox.ToSharedRef();
}

void UCustomCheckBox::SynchronizeProperties()
{

}

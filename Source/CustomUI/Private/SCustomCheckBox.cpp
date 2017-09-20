// Fill out your copyright notice in the Description page of Project Settings.

#include "SCustomCheckBox.h"

void SCustomCheckBox::Construct(const SCustomCheckBox::FArguments& InArgs)
{
	GCurSlateInt = InArgs._OutInt;
}

const FSlateBrush* SCustomCheckBox::OnGetCheckImage() const
{
	UE_LOG(LogClass, Warning, TEXT("OnGetCheckImage"));
	ECheckBoxState State = IsCheckboxChecked.Get();

	const FSlateBrush* ImageToUse;
	switch (State)
	{
	case ECheckBoxState::Unchecked:
		ImageToUse = IsPressed() ? GetUncheckedPressedImage() : (IsHovered() ? GetUncheckedHoveredImage() : GetUncheckedImage());
		break;

	case ECheckBoxState::Checked:
		ImageToUse = IsPressed() ? GetCheckedPressedImage() : (IsHovered() ? GetCheckedHoveredImage() : GetCheckedImage());
		break;

	default:
	case ECheckBoxState::Undetermined:
		ImageToUse = IsPressed() ? GetUndeterminedPressedImage() : (IsHovered() ? GetUndeterminedHoveredImage() : GetUndeterminedImage());
		break;
	}

	return ImageToUse;
}
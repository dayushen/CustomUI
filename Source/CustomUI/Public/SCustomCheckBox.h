// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SCheckBox.h"

/**
 * 
 */
class CUSTOMUI_API SCustomCheckBox :public SCheckBox
{

public:

	SLATE_BEGIN_ARGS(SCustomCheckBox)
		:_Content()
		, _OutInt()
		{}

		SLATE_DEFAULT_SLOT(FArguments, Content)

		SLATE_ARGUMENT(int32, OutInt)

	SLATE_END_ARGS()

	virtual void Construct(const FArguments& InArgs);

protected:

	virtual const FSlateBrush* OnGetCheckImage() const;

	int32 GCurSlateInt;

private:

};
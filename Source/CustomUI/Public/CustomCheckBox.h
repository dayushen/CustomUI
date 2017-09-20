// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/CheckBox.h"
#include "CustomCheckBox.generated.h"

class SCustomCheckBox;
/**
 * 
 */
UCLASS()
class CUSTOMUI_API UCustomCheckBox : public UCheckBox
{
	GENERATED_BODY()
	

public:

	UCustomCheckBox();
	~UCustomCheckBox();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CustomStyle", meta = (DisplayName = "CustomStyle"))
	int32 GCurInt;


protected:

	virtual TSharedRef<SWidget> RebuildWidget() override;

	virtual void SynchronizeProperties() override;

private:
	
};

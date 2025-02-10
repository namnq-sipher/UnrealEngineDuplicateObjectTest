// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DuplicateObjectTestUserWidget.generated.h"

class UCanvasPanel;

/**
 * 
 */
UCLASS()
class DUPLICATEOBJECTTEST_API UDuplicateObjectTestUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	UCanvasPanel* GetCanvas() const;

protected:
	UPROPERTY(EditDefaultsOnly, meta = (BindWidget))
	UCanvasPanel* Canvas;
};

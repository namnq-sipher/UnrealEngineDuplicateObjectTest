// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DuplicateObjectTestPlayerController.generated.h"

class UDuplicateObjectTestUserWidget;
/**
 * 
 */
UCLASS()
class DUPLICATEOBJECTTEST_API ADuplicateObjectTestPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSoftClassPtr<UDuplicateObjectTestUserWidget> Widget1Class;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSoftClassPtr<UUserWidget> Widget2Class;
	
	virtual void BeginPlay() override;
};

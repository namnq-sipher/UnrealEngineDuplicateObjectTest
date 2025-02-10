// Fill out your copyright notice in the Description page of Project Settings.


#include "DuplicateObjectTestPlayerController.h"

#include "DuplicateObjectTestUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"

void ADuplicateObjectTestPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UClass* Class1 = Widget1Class.LoadSynchronous();
	UClass* Class2 = Widget2Class.LoadSynchronous();
	
	UUserWidget* Widget1 = CreateWidget(this, Class1);
	UUserWidget* Widget2 = CreateWidget(this, Class2);
	Widget1->AddToViewport();
	const UDuplicateObjectTestUserWidget* Widget12 = Cast<UDuplicateObjectTestUserWidget>(Widget1);
	UCanvasPanel* Canvas = Widget12->GetCanvas();
	UCanvasPanelSlot* CanvasSlot = Canvas->AddChildToCanvas(Widget2);
	CanvasSlot->SetAnchors(FAnchors(0.5f, 0.5f));
	CanvasSlot->SetAlignment(FVector2D(0.5f, 0.5f));
	CanvasSlot->SetPosition(FVector2D(100.f, 200.f));
	CanvasSlot->SetSize(FVector2D(300.f, 200.f));

	UWidget* ClonedWidget2 = DuplicateObject<UWidget>(Widget2, this);
	UCanvasPanelSlot* ClonedCanvasSlot = Canvas->AddChildToCanvas(ClonedWidget2);
	ClonedCanvasSlot->SetAnchors(FAnchors(0.5f, 0.5f));
	ClonedCanvasSlot->SetAlignment(FVector2D(0.5f, 0.5f));
	ClonedCanvasSlot->SetPosition(FVector2D(-200.f, -300.f));
	ClonedCanvasSlot->SetSize(FVector2D(300.f, 200.f));
}

// Copyright: Bishnu Kumar, 2024


#include "UI/HUD/AuraHUD.h"

#include "UI/Widget/AuraUserWidget.h"


void AAuraHUD::BeginPlay()
{
	Super::BeginPlay();

	OverlayWidget = CreateWidget<UAuraUserWidget>(GetWorld(), OverlayWidgetClass);
	OverlayWidget->AddToViewport();
}

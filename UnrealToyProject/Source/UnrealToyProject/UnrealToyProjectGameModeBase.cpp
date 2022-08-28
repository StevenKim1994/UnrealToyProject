// Copyright Epic Games, Inc. All Rights Reserved.


#include "UnrealToyProjectGameModeBase.h"
#include <Blueprint/UserWidget.h>

void AUnrealToyProjectGameModeBase::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if (CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromViewport();
		CurrentWidget = nullptr;
	}

	if (NewWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget(GetWorld(), NewWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}

	}
}

FStringClassReference MyWidgetClassRef("/Game/MainMenu.MainMenu");

void AUnrealToyProjectGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	StartingWidgetClass =  CreateWidget<UUserWidget>(MyWidgetClassRef);

	ChangeMenuWidget(StartingWidgetClass);
}

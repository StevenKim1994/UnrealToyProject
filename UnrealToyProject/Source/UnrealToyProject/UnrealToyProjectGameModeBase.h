// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UnrealToyProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UNREALTOYPROJECT_API AUnrealToyProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "UMG_GAME")
		void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG_GAME")
		TSubclassOf<UUserWidget> StartingWidgetClass*;

	UPROPERTY()
		UUserWidget* CurrentWidget;
};

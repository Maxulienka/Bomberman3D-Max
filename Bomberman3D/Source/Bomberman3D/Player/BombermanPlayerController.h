// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "InputMappingContext.h"
#include "InputAction.h"
#include "InputActionValue.h"

#include "BombermanPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN3D_API ABombermanPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
public:
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* DefaultMappingContext;
};

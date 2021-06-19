// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ScalingUIPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FPSHOOTER_API AScalingUIPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
};

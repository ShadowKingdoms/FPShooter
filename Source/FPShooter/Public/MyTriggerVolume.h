// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "MyTriggerVolume.generated.h"

UCLASS()
class FPSHOOTER_API AMyTriggerVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyTriggerVolume();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UBoxComponent* TriggerZone; // �Ϲ������� ������ �浹�� ó���ϱ� ���� ���Ǵ� ���� ������Ʈ

	UFUNCTION()
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override; // ������ �ݸ����� ������(�浹)���� �� �˷��ִ� �̺�Ʈ(�Լ�)

	UFUNCTION()
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

};
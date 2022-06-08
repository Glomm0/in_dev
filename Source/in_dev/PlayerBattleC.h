// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Damagable.h"
#include "PlayerBattleC.generated.h"


UCLASS()
class IN_DEV_API APlayerBattleC : public APawn,public IDamagable
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerBattleC();
	UPROPERTY(EditAnywhere, Category = "Properties")
		float health = 100;
	UPROPERTY(EditAnywhere, Category = "Properties")
		float power = 10;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	float FastAttack_Implementation() override;
	
		float StrongAttack_Implementation()override;

};

// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBattleC.h"

// Sets default values
APlayerBattleC::APlayerBattleC()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerBattleC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerBattleC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerBattleC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
}



float APlayerBattleC::FastAttack_Implementation()
{
	float damage = FMath::RandRange(2, 4) * power;
	return damage;
}

float APlayerBattleC::StrongAttack_Implementation()
{
	float damage = FMath::RandRange(1, 6) * power;
	return damage;
}


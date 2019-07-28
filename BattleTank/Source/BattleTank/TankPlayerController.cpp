// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	ATank* Tank = GetControlledTank();
	if (Tank != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayController possessing %s"), *Tank->GetName())
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayController not possessing tank"))
	}
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

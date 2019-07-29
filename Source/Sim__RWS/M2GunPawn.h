// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "M2GunPawn.generated.h"

UCLASS()
class SIM__RWS_API AM2GunPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AM2GunPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void LateralRotaion(float Amount);
	void ElevationRotaion(float Amount);
	UPROPERTY(EditAnywhere, Category = "Components")
	class UStaticMeshComponent* M2Mesh;
	UPROPERTY(EditAnywhere, Category = "Components")
	class UCameraComponent* VisibleCamera;

	

	class UFloatingPawnMovement* FloatingPawnMovement;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	class UTopic* Topic;

	
	
};

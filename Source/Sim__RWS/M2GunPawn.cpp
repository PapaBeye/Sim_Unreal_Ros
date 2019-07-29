// Fill out your copyright notice in the Description page of Project Settings.


#include "M2GunPawn.h"
#include "Classes/Components/InputComponent.h"
#include "Classes/GameFramework/FloatingPawnMovement.h"
#include "Classes/Camera/CameraComponent.h"
#include "ROSIntegration/Classes/RI/Topic.h"
#include "ROSIntegration/Classes/ROSIntegrationGameInstance.h"
#include "ROSIntegration/Public/std_msgs/StdMsgsString.h"


TSharedPtr<ROSMessages::std_msgs::String> ms(new ROSMessages::std_msgs::String("Mount OK!"));
// Sets default values
AM2GunPawn::AM2GunPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovement");

	M2Mesh = CreateDefaultSubobject<UStaticMeshComponent>("M2Mesh");


	VisibleCamera = CreateDefaultSubobject<UCameraComponent>("VisibleCamera");
	VisibleCamera->SetRelativeLocation(FVector(-100.f,0.f,0.f));
	VisibleCamera->SetupAttachment(M2Mesh);

	SetRootComponent(M2Mesh);




}

// Called when the game starts or when spawned
void AM2GunPawn::BeginPlay()
{
	Super::BeginPlay();
	// Initialize a topic
	UTopic* M2PawnComm = NewObject<UTopic>(UTopic::StaticClass());
    UROSIntegrationGameInstance* rosinst = Cast<UROSIntegrationGameInstance>(GetGameInstance());
    M2PawnComm->Init(rosinst->ROSIntegrationCore, TEXT("/M2Messages"), TEXT("std_msgs/String"));

   
    // (Optional) Advertise the topic
    M2PawnComm->Advertise();
	AM2GunPawn::Topic = M2PawnComm;
	M2PawnComm->Publish(ms);
    
    // Publish a string to the topic
    
	
}
void AM2GunPawn::LateralRotaion(float Amount){
	FloatingPawnMovement->AddInputVector(GetActorForwardVector() * Amount);

}

void AM2GunPawn::ElevationRotaion(float Amount){
	FloatingPawnMovement->AddInputVector(GetActorRightVector() * Amount);
}
// Called every frame
void AM2GunPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AM2GunPawn::Topic->Publish(ms);

}

// Called to bind functionality to input
void AM2GunPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveRight", this, &AM2GunPawn::LateralRotaion);
	PlayerInputComponent->BindAxis("MoveForward", this, &AM2GunPawn::ElevationRotaion);

}


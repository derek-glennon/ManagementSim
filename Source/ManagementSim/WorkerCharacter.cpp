// Fill out your copyright notice in the Description page of Project Settings.

#include "WorkerCharacter.h"
#include "Components/CapsuleComponent.h"

FName AWorkerCharacter::StaticMeshComponentName(TEXT("WorkerStaticMesh"));

// Sets default values
AWorkerCharacter::AWorkerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(AWorkerCharacter::StaticMeshComponentName);
	if (StaticMeshComponent)
	{
		StaticMeshComponent->SetupAttachment(GetCapsuleComponent());
	}

}

// Called when the game starts or when spawned
void AWorkerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWorkerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWorkerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AWorkerCharacter::UpdateNavigationRelevance()
{
	if (StaticMeshComponent)
	{
		StaticMeshComponent->SetCanEverAffectNavigation(bCanAffectNavigationGeneration);
	}
}


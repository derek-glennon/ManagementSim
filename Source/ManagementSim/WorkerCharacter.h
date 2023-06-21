// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"
#include "WorkerCharacter.generated.h"

class UStaticMeshComponent;

UCLASS()
class MANAGEMENTSIM_API AWorkerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWorkerCharacter();

	/** Name of the StaticMeshComponent. */
	static FName StaticMeshComponentName;

private:
	/** The StaticMeshComponent being used for navMeshGeneration */
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> StaticMeshComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Override to turn on/off static mesh component 
	virtual void UpdateNavigationRelevance() override;

};

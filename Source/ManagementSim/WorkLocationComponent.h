// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "WorkLocationComponent.generated.h"

class UWorkLocationComponent;

/**
 * 
 */
UCLASS(ClassGroup="Work Locations", meta=(DisplayName="Work Location Component", BlueprintSpawnableComponent))
class MANAGEMENTSIM_API UWorkLocationComponent : public UBoxComponent
{
	GENERATED_UCLASS_BODY()

public:

	//virtual ~UWorkLocationComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WorkerLocation)
	uint32 bIsEnabled : 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = WorkerLocation)
	uint32 bIsOccupied : 1;
	
};

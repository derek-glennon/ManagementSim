// Fill out your copyright notice in the Description page of Project Settings.


#include "WorkLocationComponent.h"

UWorkLocationComponent::UWorkLocationComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bIsEnabled = true;
	bIsOccupied = false;
	WorkerCharacter = nullptr;
}


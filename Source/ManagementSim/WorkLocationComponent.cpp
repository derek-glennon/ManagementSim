// Fill out your copyright notice in the Description page of Project Settings.


#include "WorkLocationComponent.h"

UWorkLocationComponent::UWorkLocationComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bIsEnabled = true;
	bIsOccupied = false;
}

//UWorkLocationComponent::~UWorkLocationComponent()
//{
//	// Empty, but required because we don't want to have to include LightMap.h and ShadowMap.h in WorkLocationComponent.h, and they are required to compile FLightMapRef and FShadowMapRef
//}


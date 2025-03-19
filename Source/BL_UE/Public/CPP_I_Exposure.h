// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Enum_Exposure.h"
#include "UObject/Interface.h"
#include "CPP_I_Exposure.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI,Blueprintable)
class UCPP_I_Exposure : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BL_UE_API ICPP_I_Exposure
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	float ReturnCurrentExposure();
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	EExposureType ReturnExposureType();
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	float ReturnExposureLevel(EExposureResistanceType SelectedLevel);
	
	
};

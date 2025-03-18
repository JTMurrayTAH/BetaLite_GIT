// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_EntityComp_Base.h"
#include "CPP_Enum_Exposure.h"
#include "CPP_E_C_B_Exposure.generated.h"

/**
 * 
 */
UCLASS()
class BL_UE_API UCPP_E_C_B_Exposure : public UCPP_EntityComp_Base
{
	GENERATED_BODY()
	
public:
	//Current Exposure for the selected Exposure Component.
	UPROPERTY(BlueprintReadWrite)
	float CurrentExposure;

	//Current resistance for the selected exposure component.
	UPROPERTY(BlueprintReadWrite)
	float CurrentExposureResistance;

	//The type of Exposure the Component is.
	UPROPERTY(BlueprintReadWrite)
	TEnumAsByte<EExposureType> ExposureVariant;

	//The Components levels of exposure : IE Low radiation for this entity could be 30.0
	UPROPERTY(BlueprintReadWrite)
	TMap<TEnumAsByte<EExposureResistanceType>, float> ExposureLevels;

	
	
};

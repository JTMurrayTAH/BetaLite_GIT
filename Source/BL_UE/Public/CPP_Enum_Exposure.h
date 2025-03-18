// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Enum_Exposure.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum EExposureType
{
	Radiation	UMETA(DisplayName = "Radiation"),
	Psi			UMETA(DisplayName = "Psi"),
	Disease     UMETA(DisplayName = "Disease"),
	Chemical	UMETA(DisplayName = "Chemical")
};
UENUM(BlueprintType)
enum EExposureResistanceType
{
	Weak		UMETA(DisplayName = "Weak"),
	Moderate	UMETA(DisplayName = "Moderate"),
	High		UMETA(DisplayName = "High"),
	Lethal		UMETA(DisplayName = "Lethal")
};

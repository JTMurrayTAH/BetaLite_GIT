#pragma once

#include "CoreMinimal.h"



/**
 * 
 */
UENUM(BlueprintType)
enum ECPP_LimbType
{
	Head	UMETA(DisplayName = "Head"),
	Torso	UMETA(DisplayName = "Torso"),
	Arm     UMETA(DisplayName = "Arm"),
	Leg		UMETA(DisplayName = "Leg")
};
UENUM(BlueprintType)
enum ECPP_OrganType
{
	Weak		UMETA(DisplayName = "Weak"),
	Moderate	UMETA(DisplayName = "Moderate"),
	High		UMETA(DisplayName = "High"),
	Lethal		UMETA(DisplayName = "Lethal")
};
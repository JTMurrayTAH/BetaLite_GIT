// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_E_C_B_Exposure.h"

//Return the current exposure.
float UCPP_E_C_B_Exposure::ReturnCurrentExposure_Implementation()
{
	return CurrentExposure;
}
// Returns the desired exposure variant.
EExposureType UCPP_E_C_B_Exposure::ReturnExposureType_Implementation()
{
	return ExposureVariant;
}

//Find the desired Exposure level key, if present, and return its value.
float UCPP_E_C_B_Exposure::ReturnExposureLevel_Implementation(EExposureResistanceType SelectedLevel)
{
	if (ExposureLevels.Find(SelectedLevel))
	{
		return ExposureLevels[SelectedLevel];
	}
	else
	{
		return 0.0f;
	}
}
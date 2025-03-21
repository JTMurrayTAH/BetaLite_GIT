// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_E_C_B_Exposure.h"

float UCPP_E_C_B_Exposure::ReturnCurrentExposure_Implementation()
{
	return CurrentExposure;
}
EExposureType UCPP_E_C_B_Exposure::ReturnExposureType_Implementation()
{
	return ExposureVariant;
}

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
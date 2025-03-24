// Fill out your copyright notice in the Description page of Project Settings.


#include "Health/CPP_E_C_Health.h"

float UCPP_E_C_Health::GetCurrentHealthValue_Implementation() const
{
	return CurrentHealth;
}

float UCPP_E_C_Health::GetMaxHealthValue_Implementation() const
{
	return MaxHealth;
}

float UCPP_E_C_Health::GetRegenHealthValue_Implementation() const
{
	return RegenHealth;
}

float UCPP_E_C_Health::GetTimeBeforeHealValue_Implementation() const
{
	return TimeBeforeHeal;
}

void UCPP_E_C_Health::SetHealthValue_Implementation(float NewHealthValue)
{
	CurrentHealth = NewHealthValue;
}




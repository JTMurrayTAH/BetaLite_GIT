// Fill out your copyright notice in the Description page of Project Settings.


#include "Health/CPP_E_C_Health.h"

float UCPP_E_C_Health::GetCurrentHealthValue() const
{
	return CurrentHealth;
}

float UCPP_E_C_Health::GetMaxHealthValue() const
{
	return MaxHealth;
}

float UCPP_E_C_Health::GetRegenHealthValue() const
{
	return RegenHealth;
}

float UCPP_E_C_Health::GetTimeBeforeHealValue() const
{
	return TimeBeforeHeal;
}

void UCPP_E_C_Health::SetHealthValue(float NewHealthValue)
{
	CurrentHealth = NewHealthValue;
}


void UCPP_E_C_Health::SetMaxHealthValue(float NewMaxHealthValue)
{
	MaxHealth = NewMaxHealthValue;
}

void UCPP_E_C_Health::SetRegenHealthValue(float NewRegenHealthValue)
{
	RegenHealth = NewRegenHealthValue;
}

void UCPP_E_C_Health::SetTimeBeforeHealValue(float NewTimeBeforeHealValue)
{
	TimeBeforeHeal = NewTimeBeforeHealValue;
}


void UCPP_E_C_Health::Heal_Implementation(float HealAmount)
{
	float newHP = FMath::Clamp(HealAmount+GetCurrentHealthValue(), 0, GetMaxHealthValue());
	SetHealthValue(newHP);
	
}

﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "Staff.h"
#include "Card.h"

UStaff::UStaff()
{
	Card->SetCardType(ECardType::Staff);
	Name = TEXT("이직원");
}
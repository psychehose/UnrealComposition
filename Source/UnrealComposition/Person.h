// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Person.generated.h"

/**
 * 
 */
UCLASS()
class UNREALCOMPOSITION_API UPerson : public UObject
{
	GENERATED_BODY()

public:
	UPerson();

	FORCEINLINE const FString& GetName() const { return Name; }
	FORCEINLINE void SetName(const FString& InName) { Name = InName;  }
	FORCEINLINE class UCard* GetCard() const { return Card; }
	FORCEINLINE void SetCard(class UCard* InCard) { Card = InCard; }

protected:
	UPROPERTY()
	FString Name;

	// ���� ������ �ϱ� ������ ��Ŭ��� ���� -> ������ ������ �ϴ� ������ ũ�⸸ŭ�� ��Ƶα� ������ -> ������ ����
	
	/*
	* 
	* UE4���� ���� ���
	UPROPERTY()
	class UCard* Card;
	*/

	//ue5������ �̷���
	TObjectPtr<class UCard> Card;

	

private:

	
};

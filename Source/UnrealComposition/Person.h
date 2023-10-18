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

	// 전방 선언을 하기 때문에 인클루드 안함 -> 구현은 모르지만 일단 포인터 크기만큼은 잡아두기 때문에 -> 의존성 낮춤
	
	/*
	* 
	* UE4에서 정석 방법
	UPROPERTY()
	class UCard* Card;
	*/

	//ue5에서는 이렇게
	TObjectPtr<class UCard> Card;

	

private:

	
};

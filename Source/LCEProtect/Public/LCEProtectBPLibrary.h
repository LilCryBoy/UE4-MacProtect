// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "LCEProtectBPLibrary.generated.h"

UCLASS()
class ULCEProtectBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
		UFUNCTION(BlueprintPure, meta = (DisplayName = "Get MAC", Keywords = "MAC Adress"), Category = LCEMACPROTECT)
		static FString GetMACAdress();
};

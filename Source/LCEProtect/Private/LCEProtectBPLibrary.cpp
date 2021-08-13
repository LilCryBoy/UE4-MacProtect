// Copyright Epic Games, Inc. All Rights Reserved.

#include "LCEProtectBPLibrary.h"
#include "LCEProtect.h"

ULCEProtectBPLibrary::ULCEProtectBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FString ULCEProtectBPLibrary::GetMACAdress()
{
	FString MACadress;
	MACadress = FWindowsPlatformMisc::GetMacAddressString();
	return MACadress;
}


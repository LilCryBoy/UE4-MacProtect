// Copyright Epic Games, Inc. All Rights Reserved.

#include "LightCore_MACProtectBPLibrary.h"
#include "LightCore_MACProtect.h"

ULightCore_MACProtectBPLibrary::ULightCore_MACProtectBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FString ULightCore_MACProtectBPLibrary::GetMACAdress()
{
	FString MACadress;
	MACadress = FWindowsPlatformMisc::GetMacAddressString();
	return MACadress;
}


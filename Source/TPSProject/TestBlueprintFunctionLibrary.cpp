// Fill out your copyright notice in the Description page of Project Settings.


#include "TestBlueprintFunctionLibrary.h"

#include "Kismet/KismetSystemLibrary.h"

void UTestBlueprintFunctionLibrary::LuaCallTest1()
{
    UE_LOG(LogTemp, Warning, TEXT("UTestBlueprintFunctionLibrary::LuaCallTest1"));
    UKismetSystemLibrary::PrintString(nullptr, TEXT("UTestBlueprintFunctionLibrary::LuaCallTest1"), true, false, FLinearColor(0, 0.66, 1), 100);
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "TestLuaObject.h"

#include "Kismet/KismetSystemLibrary.h"

void UTestLuaObject::Init()
{
    UE_LOG(LogTemp, Log, TEXT("UTestLuaObject::Init"));
    OnMyEvent.AddDynamic(this, &UTestLuaObject::OnGameOverHandler);
}

void UTestLuaObject::TestFunction()
{
    UE_LOG(LogTemp, Log, TEXT("UTestLuaObject::TestFunction"));
    UKismetSystemLibrary::PrintString(nullptr, TEXT("UTestLuaObject::TestFunction"), true, false, FLinearColor::Red, 100);
    OnMyEvent.Broadcast();
}

void UTestLuaObject::OnGameOverHandler()
{
    UE_LOG(LogTemp, Warning, TEXT("C++ CallBack Success"));
}


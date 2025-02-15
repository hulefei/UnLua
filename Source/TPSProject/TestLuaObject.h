// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TestLuaObject.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMyEventDelegate);

/**
 * 
 */
UCLASS(Blueprintable)  // 允许在蓝图和 Lua 中使用
class TPSPROJECT_API UTestLuaObject : public UObject
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)  // 让 UnLua 可以访问
    void Init();
    
    UFUNCTION(BlueprintCallable)  // 让 UnLua 可以访问
    void TestFunction();

    UFUNCTION(BlueprintCallable)  // 让 UnLua 可以访问
    void OnGameOverHandler();

public:
    UPROPERTY()
    FOnMyEventDelegate OnMyEvent;  // 事件委托
};

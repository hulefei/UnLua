// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TestBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TPSPROJECT_API UTestBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "LuaCallTest1", Category = "UnLua Tutorial"))
    static void LuaCallTest1();
};

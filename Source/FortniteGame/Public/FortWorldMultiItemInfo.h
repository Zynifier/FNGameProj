#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FortWorldMultiItemInfo.generated.h"

class UActorComponent;
class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FFortWorldMultiItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEnableXPLimitsPerLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> ComponentClassForXPLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredXPForNextLevel;
    
    FORTNITEGAME_API FFortWorldMultiItemInfo();
};

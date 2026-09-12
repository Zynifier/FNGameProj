#pragma once
#include "CoreMinimal.h"
#include "FortControllerAIBotComponentTelemetryData_PassiveHealer.generated.h"

USTRUCT(BlueprintType)
struct FFortControllerAIBotComponentTelemetryData_PassiveHealer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPassiveHealer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InteractionCount;
    
public:
    FORTNITEGAME_API FFortControllerAIBotComponentTelemetryData_PassiveHealer();
};

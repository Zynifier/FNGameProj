#pragma once
#include "CoreMinimal.h"
#include "EFortPawnComponent_DisguiseRevealReason.h"
#include "FortControllerAIBotComponentTelemetryData_Disguise.generated.h"

USTRUCT(BlueprintType)
struct FFortControllerAIBotComponentTelemetryData_Disguise {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasDisguised;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasRevealed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortPawnComponent_DisguiseRevealReason RevealReason;
    
public:
    FORTNITEGAME_API FFortControllerAIBotComponentTelemetryData_Disguise();
};

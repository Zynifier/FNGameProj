#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent_Telemetry.h"
#include "FortControllerAIBotComponentTelemetryData_Disguise.h"
#include "FortControllerAIBotComponentTelemetryData_PassiveHealer.h"
#include "FortControllerAIBotComponent_Telemetry.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerAIBotComponent_Telemetry : public UFortControllerComponent_Telemetry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortControllerAIBotComponentTelemetryData_Disguise TelemetryDataDisguise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortControllerAIBotComponentTelemetryData_PassiveHealer TelemetryDataPassiveHealer;
    
public:
    UFortControllerAIBotComponent_Telemetry();
    
};

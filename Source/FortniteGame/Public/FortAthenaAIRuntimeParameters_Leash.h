#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaAIRuntimeParameters.h"
#include "ELeashReturnLocationMode.h"
#include "FortAthenaAIRuntimeParameters_Leash.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIRuntimeParameters_Leash : public UFortAthenaAIRuntimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LeashLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeashInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeashOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELeashReturnLocationMode LeashReturnLocationMode;
    
public:
    UFortAthenaAIRuntimeParameters_Leash();
    
};

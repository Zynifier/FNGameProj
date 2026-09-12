#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIRuntimeParameters.h"
#include "FortAthenaAIRuntimeParameters_Collection.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIRuntimeParameters_Collection : public UFortAthenaAIRuntimeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceAddToCollectionOnDamage;
    
    UFortAthenaAIRuntimeParameters_Collection();
    
};

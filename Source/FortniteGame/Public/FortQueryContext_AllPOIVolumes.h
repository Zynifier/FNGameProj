#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "GameplayTagContainer.h"
#include "FortQueryContext_AllPOIVolumes.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortQueryContext_AllPOIVolumes : public UEnvQueryContext {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery VolumeLocationTagQuery;
    
public:
    UFortQueryContext_AllPOIVolumes();
    
};

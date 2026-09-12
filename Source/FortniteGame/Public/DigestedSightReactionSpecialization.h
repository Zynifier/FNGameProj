#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "DigestedSightReactionSpecialization.generated.h"

USTRUCT(BlueprintType)
struct FDigestedSightReactionSpecialization {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FScalableFloat SightMinAdditionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FScalableFloat SightMaxAdditionTime;
    
public:
    FORTNITEGAME_API FDigestedSightReactionSpecialization();
};

#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "SpawnerDataComponentAffiliationSharedBBConfiguration.generated.h"

class UBlackboardData;

USTRUCT(BlueprintType)
struct FSpawnerDataComponentAffiliationSharedBBConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaximumDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SharedBlackboardTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* SharedBlackboard;
    
    FORTNITEGAME_API FSpawnerDataComponentAffiliationSharedBBConfiguration();
};

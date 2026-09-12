#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FactionData.h"
#include "GameplayTagContainer.h"
#include "FortFactionMapping.generated.h"

UCLASS(Blueprintable)
class UFortFactionMapping : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockResetSpecificRelationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFactionData> FactionDataArray;
    
public:
    UFortFactionMapping();
};


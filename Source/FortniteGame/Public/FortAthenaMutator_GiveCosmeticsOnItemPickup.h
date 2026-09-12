#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "CosmeticsToApplyOnItemPickupData.h"
#include "FortAthenaMutator_GiveCosmeticsOnItemPickup.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_GiveCosmeticsOnItemPickup : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UFortItemDefinition*, FCosmeticsToApplyOnItemPickupData> PickupToSkinDataMap;
    
public:
    AFortAthenaMutator_GiveCosmeticsOnItemPickup();
    
};

#pragma once
#include "CoreMinimal.h"
#include "FortAffiliationActorIdentifierList.generated.h"

USTRUCT(BlueprintType)
struct FFortAffiliationActorIdentifierList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint32> AffiliationComponentUIDs;
    
    FORTNITEGAME_API FFortAffiliationActorIdentifierList();
};

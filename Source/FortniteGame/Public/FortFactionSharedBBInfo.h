#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortFactionSharedBBInfo.generated.h"

class UBlackboardComponent;
class UFortActorComponent_Affiliation;

USTRUCT(BlueprintType)
struct FFortFactionSharedBBInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortActorComponent_Affiliation*> Members;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag BlackboardTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComp;
    
    FORTNITEGAME_API FFortFactionSharedBBInfo();
};

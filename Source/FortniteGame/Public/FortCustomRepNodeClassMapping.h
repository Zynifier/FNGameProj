#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FortCustomRepNodeClassMapping.generated.h"

class UClass;
class UFortReplicationGraphNode_Custom;

USTRUCT(BlueprintType)
struct FFortCustomRepNodeClassMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortReplicationGraphNode_Custom> NodeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ClassesToRoute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisableSquadNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisableHighFrequencyPawnRouting;
    
    FORTNITEGAME_API FFortCustomRepNodeClassMapping();
};

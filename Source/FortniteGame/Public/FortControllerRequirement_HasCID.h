#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortControllerRequirement.h"
#include "FortControllerRequirement_HasCID.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_HasCID : public UFortControllerRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> AllowedCIDs;
    
    UFortControllerRequirement_HasCID();
    
};

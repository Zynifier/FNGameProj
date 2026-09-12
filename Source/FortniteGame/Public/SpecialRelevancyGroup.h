#pragma once
#include "CoreMinimal.h"
#include "SpecialRelevancyGroup.generated.h"

class AActor;
class AFortPlayerControllerAthena;

USTRUCT(BlueprintType)
struct FSpecialRelevancyGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerControllerAthena*> Controllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpecialActors;
    
public:
    FORTNITEGAME_API FSpecialRelevancyGroup();
};

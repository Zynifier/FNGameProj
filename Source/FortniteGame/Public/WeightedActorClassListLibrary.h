#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortWeightedActorTypeList.h"
#include "Templates/SubclassOf.h"
#include "WeightedActorClassListLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API UWeightedActorClassListLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWeightedActorClassListLibrary();
    
    UFUNCTION(BlueprintCallable)
    static bool IsListValid(const FFortWeightedActorTypeList& QueryList);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<AActor> SelectRandomActorTypeFromList(const FFortWeightedActorTypeList& QueryList);
    
};

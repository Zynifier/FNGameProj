#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GenericMessageQueue.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UGenericMessageQueue : public UObject {
    GENERATED_BODY()
public:
    UGenericMessageQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMessagesQueueEmpty();
    
    UFUNCTION(BlueprintCallable)
    void ProcessNextMessage();
    
};

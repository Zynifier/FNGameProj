#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "QuestProgressionEnabledDelegateDelegate.h"
#include "FortAsyncAction_WaitQuestProgressionEnabled.generated.h"

class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAsyncAction_WaitQuestProgressionEnabled : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestProgressionEnabledDelegate OnQuestProgressionEnabled;
    
    UFortAsyncAction_WaitQuestProgressionEnabled();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAsyncAction_WaitQuestProgressionEnabled* WaitQuestProgressionEnabled(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(const EAthenaGamePhase GamePhase);
    
};

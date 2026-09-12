#pragma once
#include "CoreMinimal.h"
#include "AthenaDanceItemDefinition.h"
#include "AthenaMultiStateEmoteItemDefinition.generated.h"

class AFortPlayerPawn;
class UFortMontageItemDefinitionBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaMultiStateEmoteItemDefinition : public UAthenaDanceItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortMontageItemDefinitionBase>> EmoteStageList;
    
public:
    UAthenaMultiStateEmoteItemDefinition(const FObjectInitializer& ObjectInitializer);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceActiveEmoteIndex();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayActiveEmote(AFortPlayerPawn* FortPawn, bool bAdvanceActiveEmote);
    
    UFUNCTION(BlueprintCallable)
    void ResetActiveEmoteIndex();
    
};

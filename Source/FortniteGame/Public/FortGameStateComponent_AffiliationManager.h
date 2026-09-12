#pragma once
#include "CoreMinimal.h"
#include "FactionData.h"
#include "FortGameStateComponent.h"
#include "GameplayTagContainer.h"
#include "FortFactionInfo.h"
#include "FortGameStateComponent_AffiliationManager.generated.h"

class UFortActorComponent_Affiliation;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortGameStateComponent_AffiliationManager : public UFortGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFactionData GameParticipantFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFactionData> CachedFactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CachedFactionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockResetSpecificRelationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortActorComponent_Affiliation*> AffiliationComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FactionInfos, meta=(AllowPrivateAccess=true))
    TArray<FFortFactionInfo> FactionInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortActorComponent_Affiliation*> AffiliationComponentsToRegister;
    
public:
    UFortGameStateComponent_AffiliationManager();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FactionInfos();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

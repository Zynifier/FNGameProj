#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnPlayerDataLoadedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortInventory_SaveEntrySettings.h"
#include "PendingToApplyData.h"
#include "FortCreativePersistenceComponent.generated.h"

class AFortMinigame;
class AFortPlayerPawn;
class AFortPlayerState;
class APlayerState;
class UFortItemDefinition;
class UFortMinigameStatFilter;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortCreativePersistenceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDataLoaded OnPlayerDataLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortInventory_SaveEntrySettings SaveEntrySettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortMinigameStatFilter>> StatsToSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortItemDefinition>> ItemClassesNotToSave;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> ConfigurableItemClassesNotToSave;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPendingToApplyData> PendingToApplyData;
    
public:
    UFortCreativePersistenceComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAutoSaveInterval();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllPlayersSpecificData(AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void LoadPlayerDataNeededAfterSpawn(AFortPlayerState* FortPlayerState, AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void LoadPlayerDataNeededBeforeSpawn(AFortPlayerState* FortPlayerState, AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void LoadPlayerRelatedData(APlayerState* PlayerState, AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void LoadPlayersDataNeededAfterSpawn(AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void LoadPlayersDataNeededBeforeSpawn(AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnFinishedTeleported(AFortPlayerPawn* FortPlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    void RemovePendingToApplyData(AFortPlayerState* FortPlayerState, bool bShowsLog);
    
    UFUNCTION(BlueprintCallable)
    void StoreAllMinigamePlayersData(const AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    bool StorePlayerRelatedData(APlayerState* PlayerState, const AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearPlayerRelatedData(APlayerState* PlayerState, AFortMinigame* Minigame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearPlayerSpecificData(APlayerState* PlayerState, AFortMinigame* Minigame) const;
    
};

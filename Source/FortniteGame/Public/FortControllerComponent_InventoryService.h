#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EAthenaGamePhase.h"
#include "FortControllerComponent.h"
#include "GameplayTagContainer.h"
#include "GlobalCurrencyTrackedData.h"
#include "RepGlobalCurrencyStash.h"
#include "FortControllerComponent_InventoryService.generated.h"

class AFortGameStateAthena;
class AFortPlayerControllerGameplay;
class AFortPlayerStateAthena;
class IFortInventoryOwnerInterface;
class UCurveTable;
class UFortInventoryOwnerInterface;
class UFortItemDefinition;
class UFortPlaylist;
class UFortResourceItemDefinition;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_InventoryService : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoundToRegisteredPlayerInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRepGlobalCurrencyStash GlobalCurrencyData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldDropCurrencyOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumDeathsThatDropCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InventoryServiceEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGlobalCurrencyTrackedData TotalCurrencyEarnedData;
    
public:
    UFortControllerComponent_InventoryService();
    
    UFUNCTION(BlueprintCallable)
    static UCurveTable* GetDefaultCurrencyPayoutTable();
    
    UFUNCTION(BlueprintCallable)
    static UFortResourceItemDefinition* GetDefaultGlobalCurrencyItemDefinition();
    
    UFUNCTION(BlueprintCallable)
    static UFortControllerComponent_InventoryService* GetInventoryServiceComponent(AFortPlayerControllerGameplay* FortPC);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGlobalCurrencyWidgetEnabled();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnItemCountChanged(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, UFortItemDefinition* Definition, int32 Delta);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlacementChanged(AFortPlayerStateAthena* FortPlayerState, int32 NewPlacement);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnPlaylistDataReady(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

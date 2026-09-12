#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AthenaAIService.h"
#include "AttributeSet.h"
#include "BattleBusPOI.h"
#include "CachedPOIVolumeLocations.h"
#include "ConstructionBuildingInfo.h"
#include "DebugMinimapData.h"
#include "EAthenaGamePhaseStep.h"
#include "FortServerBotInfo.h"
#include "GameplayTagContainer.h"
#include "NavigationPOI.h"
#include "AthenaAIServicePlayerBots.generated.h"

class AActor;
class ABuildingFoundation;
class AController;
class AFortAthenaAIBotController;
class AFortAthenaMutator_Bots;
class AFortPawn;
class AFortPlayerStartWarmup;
class AFortPlayerStateAthena;
class AFortTeamInfoAthena;
class AFortWeapon;
class APawn;
class IFortSafeZoneInterface;
class UAthenaAIPopulationTracker;
class UCacheSafeZoneLocation;
class UCurveFloat;
class UDataTable;
class UEnvQuery;
class UFortAthenaAIBotNameDataAsset;
class UFortAthenaAISpawnerDataComponentList;
class UFortAthenaBeaconComponent;
class UFortSafeZoneInterface;
class UFortServerBotManagerAthena;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaAIServicePlayerBots : public UAthenaAIService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortServerBotInfo> DeadBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortServerBotInfo> PlayerBotsRestartLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Bots* CachedBotMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugMinimapData DebugMinimapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBotHostileToHumanPlayersOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseAllBattleBusPOIsSquadRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TagQueryWeightChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEnvQuery> FindLocationsAroundPOIQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleBusPOI> BattleBusTagQueryPOIList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleBusPOI> SecondaryBattleBusTagQueryPOIList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavigationPOI> OnGroundTagQueryPOIList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstructionBuildingInfo ConstructionBuildingInfo[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseCustomSupportedItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BotItemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseRegionalNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAthenaAIBotNameDataAsset> BotNameDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThankBusDriverProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThankBusDriverMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThankBusDriverMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxNumberOfBotsToSpawnAroundPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAroundBotDistanceToSearchPOIToLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BackfillEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UsePlayerCosmeticForBackfill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UsePlayerInventoryForBackfill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OnlyUseBackfillDuringSafezones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> BackfillSpawnerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SupportedItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCachedPOIVolumeLocations> CachedValidPOIVolumeLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuildingFoundation*> CachedBuildingFoundations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStartWarmup* LastTeamPlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UCacheSafeZoneLocation*> CacheSafeZoneLocationsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadBotCleanupMinDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FString> ReservedPlayerNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> LocationsInSafeZoneFreeIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortTeamInfoAthena* CurrentFillingTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BotsUniqueIDUseValidAccountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentBotControllerUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAthenaBeaconComponent*> BeaconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaAIPopulationTracker* CachedAIPopulationTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortServerBotInfo> PlayerBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortServerBotInfo> NonAthenaParticipantBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortServerBotManagerAthena* CachedServerBotManager;
    
public:
    UAthenaAIServicePlayerBots();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsWeaponSupported(AFortWeapon* FortWeapon);
    
    UFUNCTION(BlueprintCallable)
    void JoinTeam(const AController* SourceTeamController, AController* DestinationTeamController);
    
    UFUNCTION(BlueprintCallable)
    void KillBots(bool bKillPlayers, bool bKillNoneParticipants, uint8 TeamIndex, AActor* BotOwner);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAgentGameOver(AFortAthenaAIBotController* AIBotController, AFortPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnAISpawned(APawn* Pawn, const int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void OnServerGameMemberRemoved(uint8 InSquadId, uint8 InTeamIndex, AFortPlayerStateAthena* ChangedPS);
    
public:
    UFUNCTION(BlueprintCallable)
    APawn* SpawnAI(const FVector& InSpawnLocation, const FRotator& InSpawnRotation, const UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList);
    
};

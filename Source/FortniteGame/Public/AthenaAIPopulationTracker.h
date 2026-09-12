#pragma once
#include "CoreMinimal.h"
#include "AISubsystem.h"
#include "FortServerBotInfo.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AIPopulationCountSnapshot.h"
#include "AthenaAIPopulationTracker.generated.h"

class AFortAthenaAIBotController;
class AFortGameModeAthena;
class AFortPawn;
class APawn;

class AActor;
class AController;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UAthenaAIPopulationTracker : public UAISubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortServerBotInfo> PlayerBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortServerBotInfo> NoneAthenaParticipantBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AController*> AIList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameModeAthena* CachedGameMode;
    
public:
    UAthenaAIPopulationTracker();
    UFUNCTION(BlueprintCallable)
    void OnAISpawned(APawn* Pawn, const int32 RequestID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAgentGameOver(AFortAthenaAIBotController* AIBotController, AFortPawn* Pawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFortPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TArray<AController*> GetAIMatchingQuery(const FGameplayTagQuery& TagQuery) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetNumAIPawn() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetNumNonAthenaParticipantBots() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetNumPlayerBots() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetNumTotalBots() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FAIPopulationCountSnapshot GetAIPopulationTrackerCount() const;
    
};


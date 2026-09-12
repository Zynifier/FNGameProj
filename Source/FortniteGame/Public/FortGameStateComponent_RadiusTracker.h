#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameStateComponent.h"
#include "ERadiusTrackingGroupingType.h"
#include "RadiusTrackingGroupKey.h"
#include "RadiusTrackingInitializer.h"
#include "FortGameStateComponent_RadiusTracker.generated.h"

class AActor;
class AController;
class AFortPlayerController;
class UObject;
class UPrimitiveComponent;

class AFortPlayerPawn;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortGameStateComponent_RadiusTracker : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> UpdateQueue;
    
public:
    UFortGameStateComponent_RadiusTracker();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFortGameStateComponent_RadiusTracker* GetGameStateRadiusTrackerComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddOwnerSquadMemberIndexFromTracking(AActor* TrackedActor, const AFortPlayerController* PlayerTrackingActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTrackedActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackedActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackedActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveOwnerSquadMemberIndexFromTracking(AActor* TrackedActor, const AFortPlayerController* PlayerTrackingActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveTrackingForActor(AActor* TrackedActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateRadiusTrackingSizes(AActor* ActorTarget, float MaxCenterOffset, float MinimumRadius, float MaximumRadius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AddToInitializerOwnerSquadMemberIndex(FRadiusTrackingInitializer& RadiusTrackerInitializer, AFortPlayerStateAthena* PlayerToAdd);
    
    UFUNCTION(BlueprintCallable)
    static void BreakRadiusTrackingInitializer(const FRadiusTrackingInitializer& RadiusTrackingInitializer, float& MaxCenterOffset, float& MinimumRadius, float& MaximumRadius, float& TimeBetweenUpdatesInSeconds, float& RadiusAmountToShrinkEachUpdate, FLinearColor& CircleColor, AActor*& ActorTarget, TArray<AFortPlayerController*>& TargetTrackers, ERadiusTrackingGroupingType& GroupingType);
    
    UFUNCTION(BlueprintCallable)
    static FRadiusTrackingInitializer MakeRadiusTrackingInitializer(float MaxCenterOffset, float MinimumRadius, float MaximumRadius, float TimeBetweenUpdatesInSeconds, float RadiusAmountToShrinkEachUpdate, FLinearColor CircleColor, AActor* ActorTarget, TArray<AFortPlayerController*> TargetTrackers, ERadiusTrackingGroupingType GroupingType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool RemoveFromInitializerOwnerSquadMemberIndex(FRadiusTrackingInitializer& RadiusTrackerInitializer, AFortPlayerStateAthena* PlayerToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FRadiusTrackingGroupKey AddActorTrackingInfo(const FRadiusTrackingInitializer& RadiusTrackingInitializer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveTrackingForActorAndTrackingKey(AActor* TrackedActor, FRadiusTrackingGroupKey TrackingKey);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveTrackingForActorFromPlayer(AActor* TrackedActor, AFortPlayerController* PlayerTrackingActor, ERadiusTrackingGroupingType GroupingType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveTrackingForActorFromTrackingGroup(AActor* TrackedActor, const AFortPlayerController* PlayerTrackingActor, ERadiusTrackingGroupingType GroupingType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRadiusTrackingViewersFromPlayerPawns(FRadiusTrackingInitializer& RadiusTrackingInitializer, const FRadiusTrackingInitializer& RadiusTrackingInitializerInput, const TArray<AFortPlayerPawn*>& ViewerPawns);
    
};

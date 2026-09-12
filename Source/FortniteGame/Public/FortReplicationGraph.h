#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ReplicationGraph.h"
#include "FortReplicationGraph.generated.h"

class AActor;
class UFortReplicationGraphNode_LiveSpectator;
class UFortReplicationGraphNode_PlayerStateFrequencyLimiterV2;
class UReplicationGraphNode_ActorList;
class UReplicationGraphNode_FortVolumeGrid;
class UReplicationGraphNode_GridSpatialization2D;

class UClass;
class UFortReplicationGraphNode_Custom;
class UFortReplicationGraphNode_PlayerStateFrequencyLimiter;

UCLASS(Blueprintable, NonTransient)
class UFortReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> AlwaysRelevantClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_GridSpatialization2D* RootGridNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortReplicationGraphNode_LiveSpectator* LiveSpectatorRelevancyNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortReplicationGraphNode_PlayerStateFrequencyLimiter* PlayerStateLimiterNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortReplicationGraphNode_PlayerStateFrequencyLimiter* ReplayPlayerStateLimiterNode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UReplicationGraphNode_FortVolumeGrid*> FortVolumeGrids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UFortReplicationGraphNode_Custom*> ClassToNodetoRouteTo;
    
public:
    UFortReplicationGraph();
    UFUNCTION(BlueprintCallable)
    void OnVehicleDestroyed(AActor* DestroyedVehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnHighFrequencyPawnDestroyed(AActor* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStatePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
};


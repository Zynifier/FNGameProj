#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "Templates/SubclassOf.h"
#include "SpecialRelevancyGroup.h"
#include "SpecialRelevancyModeData.h"
#include "FortReplicationGraphNode_SpecialRelevancy.generated.h"

class AActor;
class AFortPlayerPawn;
class AFortPlayerStateAthena;
class AFortProjectileBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortReplicationGraphNode_SpecialRelevancy : public UReplicationGraphNode_GridSpatialization2D {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialRelevancyGroup> RelevancyGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPlayerPawn> PlayerPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AFortProjectileBase>> ProjectileClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> SpecialActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialRelevancyModeData CurrentRelevancyModeData;
    
public:
    UFortReplicationGraphNode_SpecialRelevancy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSquadIdChanged(AFortPlayerStateAthena* PlayerState, const uint8 OldSquadIndex);
    
};

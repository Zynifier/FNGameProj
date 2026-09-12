#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_ItemAttachedActor.generated.h"

class AFortPickup;
class AFortPlayerController;
class AFortPlayerControllerAthena;
class APawn;
class UFortItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_ItemAttachedActor : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UFortControllerComponent_ItemAttachedActor();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerCreatedPickup(const AFortPlayerController* PlayerController, AFortPickup* PickUp);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCreatedPickupProjectile(const AFortPlayerControllerAthena* PlayerController, const UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPossessedPawn(APawn* PossessedPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveItemFromPickupSpawnsQueuedMap(UFortItemDefinition* ItemDefinition);
    
};

#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FortPickupComponent_ItemAttachedActor.generated.h"

class AActor;
class AFortPawn;
class AFortPickup;
class UFortWorldItemDefinition;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPickupComponent_ItemAttachedActor : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachedActor;
    
public:
    UFortPickupComponent_ItemAttachedActor();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AttachActorToPickup(AFortPickup* PickUp, AActor* ActorToAttach);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAttachedActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPickupPickedUpByPlayer(AFortPickup* SelfActor, AFortPawn* InteractingPawn, const UFortWorldItemDefinition* WorldItemDefinition, FVector PickupLocation);
    
};

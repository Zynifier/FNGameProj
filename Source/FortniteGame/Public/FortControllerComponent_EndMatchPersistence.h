#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortItemEntry.h"
#include "FortControllerComponent_EndMatchPersistence.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_EndMatchPersistence : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemEntry> FriendChestInstancedLoot;
    
public:
    UFortControllerComponent_EndMatchPersistence();
    
};

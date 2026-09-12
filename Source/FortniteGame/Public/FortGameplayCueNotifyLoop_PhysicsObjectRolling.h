#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FortGameplayCueNotify_Loop.h"
#include "FortGameplayCueNotifyLoop_PhysicsObjectRolling.generated.h"

class UFortLayeredAudioComponent;
class UFortPhysicsObjectComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameplayCueNotifyLoop_PhysicsObjectRolling : public AFortGameplayCueNotify_Loop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLayeredAudioComponent* LayeredAudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectComponent* PhysicsObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult CachedHitResult;
    
    AFortGameplayCueNotifyLoop_PhysicsObjectRolling();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHitLocation() const;
    
};

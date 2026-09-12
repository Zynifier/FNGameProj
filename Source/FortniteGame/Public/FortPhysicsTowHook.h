#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "NetTowhookAttachState.h"
#include "FortPhysicsTowHook.generated.h"

class AActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPhysicsTowHook : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedAttachStates, meta=(AllowPrivateAccess=true))
    TArray<FNetTowhookAttachState> ReplicatedAttachStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* AlwaysAttachedActor;
    
public:
    AFortPhysicsTowHook();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAttachStates();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEndPoint(FVector& OutEndPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStartPoint(FVector& OutStartPoint) const;
    
};

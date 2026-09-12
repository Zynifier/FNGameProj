#pragma once
#include "CoreMinimal.h"
#include "CosmeticVariantInfo.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "EFCRP_LoopBehavior.h"
#include "FCRP_LoopingUpdate.h"
#include "FortCosmeticReactivePreview.generated.h"

class AActor;
class AFortPlayerPawn;
class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortCosmeticReactivePreview : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PotentiallyResponsiveObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFCRP_LoopingUpdate> ActiveLoops;
    
public:
    AFortCosmeticReactivePreview();
    
    UFUNCTION(BlueprintCallable)
    void DispatchReactEnd();
    
    UFUNCTION(BlueprintCallable)
    void DispatchReactStart();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBoundingActorEndedPlay(AActor* ActorEndingPlay, TEnumAsByte<EEndPlayReason::Type> Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnFortPlayerPawnFinishedCustomization(AFortPlayerPawn* Pawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCosmeticVariantInfo GetVariantInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void StartSmoothDynamicStat(UObject* Requester, float From, float To, float AtRate, EFCRP_LoopBehavior EndBehavior);
    
    UFUNCTION(BlueprintCallable)
    void StartSteppedDynamicStat(UObject* Requester, int32 From, int32 To, int32 AtRate, EFCRP_LoopBehavior EndBehavior);
    
};

#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Components/ActorComponent.h"
#include "IndicatedActorDataWithFilter.h"
#include "IndicatedActorParticleSystemData.h"
#include "PulseIndicatorComponent.generated.h"

class AFortPlayerControllerAthena;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UPulseIndicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIndicatedActorDataWithFilter> IndicatedActorFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IndicatorGroupIdentifierOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StencilGroupIdentifierOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PlayerPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndicatedActorParticleSystemData PlayerParticleSystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PulseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MarkRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MarkDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerGroupIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerAthena* IndicatingController;
    
public:
    UPulseIndicatorComponent();
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayTeam(uint8 NewDisplayTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetIndicatingController(AFortPlayerControllerAthena* Controller);
    
    UFUNCTION(BlueprintCallable)
    void StartPulseMarkers();
    
    UFUNCTION(BlueprintCallable)
    void StopPulseMarkers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseComponentIndicators() const;
    
};

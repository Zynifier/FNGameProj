#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "ConvertEventDelegate.h"
#include "FortPawnComponent.h"
#include "ConvertedEventDelegate.h"
#include "PawnConvertEventDelegate.h"
#include "PawnUnconvertEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortPawnComponent_Convert.generated.h"

class AActor;
class AController;
class UFortPawnComponent_Convert;
class UPrimitiveComponent;
class USoundBase;

class AFortPawn;
class AFortPlayerState;
class UFortAthenaAIRuntimeParameters_AIConvert;
class UFortItemDefinition;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPawnComponent_Convert : public UFortPawnComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CanConvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CanBeConverted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CanBeConvertedFromDBNO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxConvertedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ConvertTimeFromDBNO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ConvertInteractionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> IndicatorMarkerWidgetClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvertedEvent OnConvertedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnConvertEvent OnConvertEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnUnconvertEvent OnUnconvertEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanConvert: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanBeConverted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanBeConvertedFromDBNO: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerState* ConverterPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIRuntimeParameters_AIConvert* CachedAIConvertParameters;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvertEvent OnBeingConvertedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvertEvent OnStopBeingConvertedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortPawnComponent_Convert*> ConvertedPawnComponents;
    
public:
    UFortPawnComponent_Convert();
protected:
    UFUNCTION(BlueprintCallable)
    void OnConvertedPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void TriggerConversion(AFortPawn* Converter, AFortPawn* Converted);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerUnconversion(AFortPawn* Unconverter, AFortPawn* Unconverted);
    
    UFUNCTION(BlueprintCallable)
    void HideIndicatorMarker();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnConverterStartedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting);
    
    UFUNCTION(BlueprintCallable)
    void OnConverterStoppedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting);
    
    UFUNCTION(BlueprintCallable)
    void OnConverterTeamChange();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCanBeConverted(const bool bInCanBeConverted);
    
    UFUNCTION(BlueprintCallable)
    void ShowIndicatorMarker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumConvertedPawns() const;
    
};


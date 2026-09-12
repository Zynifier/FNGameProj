#pragma once
#include "CoreMinimal.h"
#include "FortGameplayCueNotify_Loop.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "FortGameplayCueNotifyAthena_AIAlertState.generated.h"

class UFortAthenaAlertStateComponent;
class UStaticMeshComponent;

class AFortPlayerPawn;
class UFortAbilitySystemComponent;

UCLASS(Blueprintable)
class AFortGameplayCueNotifyAthena_AIAlertState : public AFortGameplayCueNotify_Loop {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomPrimitiveDataFloatIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SpriteMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpriteMeshAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpriteMeshRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FillIconDataFloatIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthMeterStartValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentGameplayEffectLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentStealthMeterPctFilled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAlertStateComponent* CurrentAlertStateComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAlertStateComponent* CachedAlertStateComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CachedMeshComp;
    
public:
    AFortGameplayCueNotifyAthena_AIAlertState();
private:
    UFUNCTION(BlueprintCallable)
    void AlertStateHideTagCallback(const FGameplayTag Tag, int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void HandleAbilitySystemComponentInitialized(UFortAbilitySystemComponent* AbilitySystemComponent, AFortPlayerPawn* Pawn);
    
};


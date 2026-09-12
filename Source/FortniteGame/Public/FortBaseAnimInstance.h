#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimTagProperty.h"
#include "GameplayTagNotifyDelegateDelegate.h"
#include "BoneSet.h"
#include "GameplayTagContainer.h"
#include "FortBaseAnimInstance.generated.h"

class AFortPawn;

class UFortAnimInputEvent;

UCLASS(Blueprintable, MinimalAPI, NonTransient, Config=Game)
class UFortBaseAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAnimInputEvent*> AnimInputEventList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FBoneSet> BoneSets;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimTagProperty> AnimPropertyGameplayTagBindings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagNotifyDelegate OnGameplayTagNotifyBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagNotifyDelegate OnGameplayTagNotifyEnd;
    
    UFortBaseAnimInstance();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPawn* TryGetFortPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintProcessAnimInputEvent(const UFortAnimInputEvent* AnimInputEvent);
    
};


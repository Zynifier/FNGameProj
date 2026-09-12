#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "GameplayTagContainer.h"
#include "FortPlayerStart.generated.h"

class UParticleSystemComponent;

class AController;

UCLASS(Blueprintable)
class AFortPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
private:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* ClaimingController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpirationCheckInterval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* StartParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StartPointTags;
    
public:
    AFortPlayerStart();
};


#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#include "FortAnimNotify_PlayParticleConditional.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAnimNotify_PlayParticleConditional : public UAnimNotify_PlayParticleEffect {
    GENERATED_BODY()
public:
    UFortAnimNotify_PlayParticleConditional();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldTriggerAnimNotify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

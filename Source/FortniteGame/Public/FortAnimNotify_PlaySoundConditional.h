#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "FortAnimNotify_PlaySoundConditional.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAnimNotify_PlaySoundConditional : public UAnimNotify_PlaySound {
    GENERATED_BODY()
public:
    UFortAnimNotify_PlaySoundConditional();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldTriggerAnimNotify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

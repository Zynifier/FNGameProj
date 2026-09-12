#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortPlayspaceComponent.h"
#include "PlayspaceComponent_AIPerceptionModifier.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UPlayspaceComponent_AIPerceptionModifier : public UFortPlayspaceComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AIBotSightClampPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AIBotSightRadiusClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AIBotLoseSightRadiusClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConcealmentDistance;
    
public:
    UPlayspaceComponent_AIPerceptionModifier();
    
};

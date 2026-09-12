#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaAISpawnerDataComponent_GameplayBase.h"
#include "FortAthenaAISpawnerDataComponent_AIGameplay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_AIGameplay : public UFortAthenaAISpawnerDataComponent_GameplayBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSoundStimulusBroadcastInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMoveSoundRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGenerateSoundInAllMovementModes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PawnCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DefaultLifespanAfterDeath;
    
public:
    UFortAthenaAISpawnerDataComponent_AIGameplay();
};


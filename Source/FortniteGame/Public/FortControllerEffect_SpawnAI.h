#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortControllerEffect.h"
#include "Templates/SubclassOf.h"
#include "FortControllerEffect_SpawnAI.generated.h"

class UFortAthenaAISpawnerData;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerEffect_SpawnAI : public UFortControllerEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerData> AISpawnerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalSpaceSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalSpaceOffsetIgnorePitchAndRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AdditionalRelativeRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDelay;
    
    UFortControllerEffect_SpawnAI();
    
};

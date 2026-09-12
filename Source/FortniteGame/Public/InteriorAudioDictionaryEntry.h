#pragma once
#include "CoreMinimal.h"
#include "InteriorAudioBuildingRotationConstraint.h"
#include "EInteriorAudioBuildingEvaluation.h"
#include "InteriorAudioDictionaryEntry.generated.h"

USTRUCT(BlueprintType)
struct FInteriorAudioDictionaryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EditCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteriorAudioBuildingEvaluation DefaultEvaluation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteriorAudioBuildingEvaluation ConditionalEvaluation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorAudioBuildingRotationConstraint RotationConstraint;
    
    UPROPERTY(EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    int32 BuildingWeights[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SameCellBuildingCount;
    
    FORTNITEGAME_API FInteriorAudioDictionaryEntry();
};


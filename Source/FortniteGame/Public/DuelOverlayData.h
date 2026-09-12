#pragma once
#include "CoreMinimal.h"
#include "DuelOverlayData.generated.h"

class UFortItemDefinition;
class UObject;

USTRUCT(BlueprintType)
struct FDuelOverlayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChallengerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChallengedNPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ChallengerSocialAvatarBrushPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ChallengedNPCSocialAvatarBrushPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ChallengedNPCLootDef;
    
    FORTNITEGAME_API FDuelOverlayData();
};

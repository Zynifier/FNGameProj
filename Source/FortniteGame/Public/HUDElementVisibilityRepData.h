#pragma once
#include "CoreMinimal.h"
#include "EFortHUDElementVisibiltyOption.h"
#include "EFortReticleVisibiltyOption.h"
#include "GameplayTagContainer.h"
#include "HUDElementVisibilityRepData.generated.h"

USTRUCT(BlueprintType)
struct FHUDElementVisibilityRepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HiddenHUDElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ShownHUDElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortHUDElementVisibiltyOption> WorldResourceVisibilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortReticleVisibiltyOption ReticleVisibilityOption;
    
    FORTNITEGAME_API FHUDElementVisibilityRepData();
};

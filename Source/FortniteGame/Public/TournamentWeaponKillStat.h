#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TournamentWeaponKillStat.generated.h"

class AFortPlayerState;

USTRUCT(BlueprintType)
struct FTournamentWeaponKillStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AFortPlayerState*, int32> PlayerStats;
    
    FORTNITEGAME_API FTournamentWeaponKillStat();
};

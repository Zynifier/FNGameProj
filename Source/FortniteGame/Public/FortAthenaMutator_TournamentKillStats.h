#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "TournamentWeaponKillStat.h"
#include "FortAthenaMutator_TournamentKillStats.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_TournamentKillStats : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTournamentWeaponKillStat> KillStatList;
    
public:
    AFortAthenaMutator_TournamentKillStats();
    
};

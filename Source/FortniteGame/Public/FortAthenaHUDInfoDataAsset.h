#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortTeamAffiliation.h"
#include "FortAthenaTeamHUDInfo.h"
#include "FortAthenaHUDInfoDataAsset.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaHUDInfoDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FFortAthenaTeamHUDInfo> TeamInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EFortTeamAffiliation::Type>, FFortAthenaTeamHUDInfo> TeamAffiliationInfo;
    
public:
    UFortAthenaHUDInfoDataAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindTeamInfoForTeam(uint8 Team, bool& bOutWasInfoFound, FFortAthenaTeamHUDInfo& OutTeamInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindTeamInfoForTeamAffiliation(TEnumAsByte<EFortTeamAffiliation::Type> TeamAffiliation, bool& bOutWasInfoFound, FFortAthenaTeamHUDInfo& OutTeamInfo) const;
    
};

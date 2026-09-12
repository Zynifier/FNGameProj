#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AthenaAIBlueprintLibrary.generated.h"

class AActor;
class AController;
class AFortWeapon;
class UAthenaAIPopulationTracker;
class UAthenaAIServicePlayerBots;
class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaAIBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAthenaAIBlueprintLibrary();
    
private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAthenaAIPopulationTracker* GetAIPopulationTracker(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAthenaAIServicePlayerBots* GetAIServicePlayerBots(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsWeaponSupported(UObject* WorldContextObject, AFortWeapon* FortWeapon);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void JoinTeam(UObject* WorldContextObject, const AController* SourceTeamController, AController* DestinationTeamController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void KillBots(UObject* WorldContextObject, const bool bKillPlayers, const bool bKillNoneParticipants, const uint8 TeamIndex, AActor* BotOwner);
    
};

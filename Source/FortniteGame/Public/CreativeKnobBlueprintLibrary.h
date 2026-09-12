#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CreativeKnobBlueprintLibrary.generated.h"

class UFortPlaylistAthena;
class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UCreativeKnobBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCreativeKnobBlueprintLibrary();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShiftedAnyTeamValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShiftedFriendliesTeamValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShiftedHostilesTeamValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShiftedNeutralTeamValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShiftedNoneTeamValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetTeamArray(const UObject* InWorldContext, const UFortPlaylistAthena* InPlaylist);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTeamValue(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTeamValueAsIndex(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUnshiftedNeutralTeamValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActivatingTeam(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsClassAny(int32 InClassValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsClassNone(int32 InClassValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompletingTeamWins(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCooperativeTeam(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCustomTeam(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFreeForAllTeam(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSpectatingTeam(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamAll(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamAllies(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamAny(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamDoNotSwitch(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamEnemies(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamFriendlies(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamHostiles(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamNeutral(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamNone(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamRandom(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamTriggeringPlayer(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamUseGameWinConditions(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTriggeringTeam(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidTeamIndex(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWinningTeam(int32 InTeamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ReshiftTeamIndexValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ReshiftTeamValue(int32 InValue);
    
};

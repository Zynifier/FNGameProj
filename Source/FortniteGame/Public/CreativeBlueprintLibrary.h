#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/CollisionProfile.h"
#include "ESubGame.h"
#include "FortCreativeAnimateFloatCurveResult.h"
#include "CreativeBlueprintLibrary.generated.h"

class AController;
class UFortMinigameManager;

class AFortVolumeManager;
class UFortItemDefinition;
class UObject;

class UCurveFloat;

UCLASS(Blueprintable)
class UCreativeBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCreativeBlueprintLibrary();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> SegmentSphereIntersection(const FVector& SegmentStart, const FVector& SegmentEnd, const FVector& SphereOrigin, const float SphereRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> SegmentCylinderIntersection(const FVector& SegmentStart, const FVector& SegmentEnd, const FVector& CylinderOrigin, const float CylinderRadius);
    
    UFUNCTION(BlueprintCallable)
    static void LogHUDMessageWarning(const FString& inString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetNameFromCollisionProfile(FCollisionProfileName InCollisionProfile);
    
    UFUNCTION(BlueprintCallable)
    static UFortMinigameManager* GetMinigameManager(AController* Controller, ESubGame SubGame);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBlackListedItemDefinition(const AFortVolumeManager* VolumeManager, const UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUseRestrictionComponentDebuggingEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWhiteListedItemDefinition(const UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    static void LogCreativeStreamingMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateInGameMapHeatmapTexture(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FFortCreativeAnimateFloatCurveResult AnimateFloatCurve(const float DeltaTime, UPARAM(Ref) float& CurrentTime, UCurveFloat* FCurve, const float TotalAnimationTime, const bool bInvertTime);
    
};


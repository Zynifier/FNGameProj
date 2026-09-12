#pragma once
#include "CoreMinimal.h"
#include "AthenaGameMessageData.h"
#include "AttributeSet.h"
#include "EFortTeamAffiliation.h"
#include "ETeamPerformanceMessageReplicationType.h"
#include "ETeamPerformanceMessageTrackingStat.h"
#include "TeamPerformanceMessageData.generated.h"

USTRUCT(BlueprintType)
struct FTeamPerformanceMessageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnabledHotfix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EFortTeamAffiliation::Type>, FAthenaGameMessageData> TeamAffiliationMessagesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamPerformanceMessageTrackingStat TrackingStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StatThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamPerformanceMessageReplicationType ReplicationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfTeamsToTriggerFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> TeamsThatTriggeredMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEnabledInternal: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanStillBeTriggered: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MessageIndex;
    
    FORTNITEGAME_API FTeamPerformanceMessageData();
};

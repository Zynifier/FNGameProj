#pragma once
#include "CoreMinimal.h"
#include "EAdHocSquads_InviteStatus.h"
#include "Engine/NetSerialization.h"
#include "AdHocSquad_InviteData.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FAdHocSquad_InviteData : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* InvitingPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAdHocSquads_InviteStatus InviteStatus;
    
    FORTNITEGAME_API FAdHocSquad_InviteData();
};

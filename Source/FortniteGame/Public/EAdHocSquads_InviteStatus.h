#pragma once
#include "CoreMinimal.h"
#include "EAdHocSquads_InviteStatus.generated.h"

UENUM(BlueprintType)
enum class EAdHocSquads_InviteStatus : uint8 {
    Unset,
    Inviting,
    InviteEnded_APlayerAcceptedTheInvite,
    InviteCancelled_SquadFull,
    InviteCancelled_ByInvitingPlayer,
};

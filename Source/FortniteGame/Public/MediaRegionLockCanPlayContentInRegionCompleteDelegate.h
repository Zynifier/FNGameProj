#pragma once
#include "CoreMinimal.h"
#include "MediaRegionLockCanPlayContentInRegionCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FMediaRegionLockCanPlayContentInRegionComplete, bool, bResolved, bool, bApproved, const FString&, InURL, const FString&, Limits, const FString&, ContentId, const bool, bBulk);

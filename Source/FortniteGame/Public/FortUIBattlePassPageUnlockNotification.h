#pragma once
#include "CoreMinimal.h"
#include "FortUINotification.h"
#include "FortUIBattlePassPageUnlockNotification.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortUIBattlePassPageUnlockNotification : public UFortUINotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BattlePassPageUnlockToastTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BattlePassPageUnlockToastDescription;
    
public:
    UFortUIBattlePassPageUnlockNotification();
    
};

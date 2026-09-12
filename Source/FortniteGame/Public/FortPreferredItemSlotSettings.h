#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortPreferredItemSlotItemType.h"
#include "PreferredItemSlotSettingData.h"
#include "FortPreferredItemSlotSettings.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPreferredItemSlotSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortPreferredItemSlotItemType, FPreferredItemSlotSettingData> SlotItemTypeData;
    
    UFortPreferredItemSlotSettings();
    
};

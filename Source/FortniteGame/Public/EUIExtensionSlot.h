#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionSlot.generated.h"

UENUM(BlueprintType)
enum class EUIExtensionSlot : uint8 {
    Primary,
    TopRightCorner,
    GameInfoBox,
    Quickbar,
    QuickbarUnderlay,
    UpperCenter,
    CrosshairRight,
    UnderSquadInfo,
    FullScreenMap,
    BelowRespawnWidget,
    BelowCompass,
    UnderTeammateStatus,
    ControllerBindingCallout,
    AboveStormMessageSlot,
    CustomMinigameCallouts,
    UnderLocalPlayerInfo,
    PlayerHealthbarOverlay,
    InventoryScreenReplacement,
    Reticle,
    KillfeedSlot,
    PrioritizedContextualSlot,
    RightOfTeammateStatus,
    TeammateStatusPortraitOverlay,
    MobileHUDBottomRight,
    InventoryScreenTab,
    InventoryPanelSubTab,
    MiniMapOverlay,
    InventoryEquipSlot,
    InventoryItemInfo,
    HUDEquippedItemInfo,
    UnderneathTeammateStatusList,
    FullScreenMapSquadEliminationsOverlay,
    PrimaryQuickBarSlot,
    MainMenuButtonListInZone,
    MainMenuButtonListFrontEnd,
};


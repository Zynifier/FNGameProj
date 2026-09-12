#include "WrapPreviewGridActor.h"

void AWrapPreviewGridActor::SetWrap(UAthenaItemWrapDefinition* NewWrap) {
}

TArray<FName> AWrapPreviewGridActor::GetMeshComponentNames() {
    return TArray<FName>();
}

AWrapPreviewGridActor::AWrapPreviewGridActor() {
    WrapToApply = NULL;
    MaterialTypeForRawMeshes = EItemWrapMaterialType::WeaponWrap;
    WidthInItems = 0;
    bScanForWeapons = false;
    bShowRangedWeapons = true;
    bShowMeleeWeapons = false;
    bExcludePrototypeRangedWeapons = false;
    bFilterOutRarityDupesForRangedWeapons = true;
    bFilterOutTierDupesForWeapons = false;
    bFilterOutCraftingMaterialDupesForWeapons = false;
    LockerFilterMode = EWrapPreviewGridLockerMode::IgnoreLockerConfiguration;
    bShowOnlyItemsThatDontHaveWrapLockerSlot = false;
    bShowWrapMatchIcon = true;
    bHasSectionLimit = false;
    MaterialSectionMask = 0;
    FailedToMatchLockerMarker = NULL;
    StatusIconSize = 1;
    bStatusIconScreenSizeScaled = true;
}


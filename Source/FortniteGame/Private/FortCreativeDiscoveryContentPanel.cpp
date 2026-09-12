#include "FortCreativeDiscoveryContentPanel.h"

FFortCreativeDiscoveryContentPanel::FFortCreativeDiscoveryContentPanel() {
    PanelType = EFortCreativeDiscoveryPanelType::CuratedList;
    PageSize = 0;
    NumPages = 0;
    EntrySkippingMethod = EFortCreativeDiscoverySkippedEntries::None;
    SkippedEntriesCount = 0;
    SkippedEntriesPercent = 0.0f;
    bLowestToHighest = false;
}

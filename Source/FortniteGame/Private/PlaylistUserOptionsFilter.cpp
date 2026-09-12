#include "PlaylistUserOptionsFilter.h"

bool UPlaylistUserOptionsFilter::IsValueFiltered_Implementation(const FString& Value) const {
    return false;
}

UPlaylistUserOptionsFilter::UPlaylistUserOptionsFilter() {
    KnobThatWeAreBeingApplied = NULL;
    bInvertIgnoredValues = false;
    MenuListType = UFortMatchmakingKnobsDataSource::None;
}

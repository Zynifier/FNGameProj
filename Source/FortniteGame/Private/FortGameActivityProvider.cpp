#include "FortGameActivityProvider.h"

TArray<FCreativeIslandDescriptionTag> UFortGameActivityProvider::GetActivityDescriptionTags(const UFortGameActivity* Activity) {
    return TArray<FCreativeIslandDescriptionTag>();
}

UFortGameActivityProvider::UFortGameActivityProvider() {
    OwningPlayer = NULL;
}

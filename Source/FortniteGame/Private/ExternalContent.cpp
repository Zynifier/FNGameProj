#include "ExternalContent.h"

bool UExternalContent::IsLoaded() const {
    return false;
}

UExternalContent::UExternalContent() {
    Type = EReferenceType::Hard;
}

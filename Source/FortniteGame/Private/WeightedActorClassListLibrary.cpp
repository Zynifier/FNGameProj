#include "WeightedActorClassListLibrary.h"

bool UWeightedActorClassListLibrary::IsListValid(const FFortWeightedActorTypeList& QueryList) {
    return false;
}

TSubclassOf<AActor> UWeightedActorClassListLibrary::SelectRandomActorTypeFromList(const FFortWeightedActorTypeList& QueryList) {
    return NULL;
}

UWeightedActorClassListLibrary::UWeightedActorClassListLibrary() {
}

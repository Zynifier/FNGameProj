#include "CustomCharacterData.h"

FCustomCharacterData::FCustomCharacterData() {
    WasPartReplicatedFlags = 0;
    RequiredVariantPartFlags = 0;
    Charms[0] = NULL;
    Charms[1] = NULL;
    Charms[2] = NULL;
    Charms[3] = NULL;
    bReplicationFailed = false;
}


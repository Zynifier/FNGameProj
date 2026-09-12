#include "FortCurieManagerComponentEntry.h"

FFortCurieManagerComponentEntry::FFortCurieManagerComponentEntry() {
    bIsActive = false;
    Priority = ECurieManagerComponentPriority::Priority_1;
    ManagerType = NULL;
    Config = NULL;
}

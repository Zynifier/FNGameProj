#include "FortWeaponComponent_RecoilCurve.h"

void UFortWeaponComponent_RecoilCurve::EndRecoilCurve() {
}

void UFortWeaponComponent_RecoilCurve::StartRecoilCurve() {
}

UFortWeaponComponent_RecoilCurve::UFortWeaponComponent_RecoilCurve() {
    bRandomizeHorizFlip = false;
    bRandomizeVertFlip = false;
    RecoilBehaviorType = EFortRecoilCurveType::WithTime;
}

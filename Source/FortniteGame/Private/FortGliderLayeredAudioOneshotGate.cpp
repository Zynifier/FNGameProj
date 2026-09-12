#include "FortGliderLayeredAudioOneshotGate.h"

FFortGliderLayeredAudioOneshotGate::FFortGliderLayeredAudioOneshotGate() {
    GateValue = 0.0f;
    Direction = ELayeredAudioTriggerDir::Forward;
    FadeWhenOutsideGate = false;
    MinTimeSinceTrigger = 0.0f;
    InterruptFadeTime = 0.0f;
}

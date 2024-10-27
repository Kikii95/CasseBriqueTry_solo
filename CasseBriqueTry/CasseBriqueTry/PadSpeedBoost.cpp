#include "PadSpeedBoost.h"

PadSpeedBoost::PadSpeedBoost(Pad& pad, int duration) : PadEffect(PadEffectType::PadSpeedBoost, pad, duration) {}

void PadSpeedBoost::applyPadEffect() {
    pad.setSpeed(pad.getSpeed() * 2);
    isActive = true;
    PadEffect::display();
}

void PadSpeedBoost::removePadEffect() {
    pad.setSpeed(pad.getSpeed() / 2);
    isActive = false;
    PadEffect::display();
}

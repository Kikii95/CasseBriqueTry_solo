#pragma once
#include "Pad.h"

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

enum class PadEffectType {
    PadSpeedBoost,
    PadSpeedNerf,
};

class PadEffect {
protected:
    PadEffectType type;
    Pad& pad; 
    int duration;
    bool isActive;

public:
    PadEffect(PadEffectType type, Pad& pad, int duration)
        : type(type), pad(pad), duration(duration), isActive(false) {}

    std::string PadEffectTypeToString(PadEffectType type);
    virtual void applyPadEffect() = 0;
    virtual void removePadEffect() = 0;
    void update(float deltaTime);  
    void display();  
};

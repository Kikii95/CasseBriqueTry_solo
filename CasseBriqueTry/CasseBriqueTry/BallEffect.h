#pragma once
#include "Ball.h"

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

enum class BallEffectType {
    BallSpeedBoost,
    BallSpeedNerf,
};

class BallEffect {
protected:
    BallEffectType type;
    Ball& ball; 
    int duration;
    bool isActive;

public:
    BallEffect(BallEffectType type, Ball& ball, int duration)
        : type(type), ball(ball), duration(duration), isActive(false) {}

    std::string BallEffectTypeToString(BallEffectType type);
    virtual void applyBallEffect() = 0;
    virtual void removeBallEffect() = 0;
    void update(float deltaTime);
    void display();
};

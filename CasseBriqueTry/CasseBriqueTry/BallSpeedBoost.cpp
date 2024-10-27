#include "BallSpeedBoost.h"

BallSpeedBoost::BallSpeedBoost(Ball& ball, int duration) : BallEffect(BallEffectType::BallSpeedBoost, ball, duration) {}

void BallSpeedBoost::applyBallEffect() {
    ball.setSpeed(ball.getSpeed() * 2);
    isActive = true;
    BallEffect::display();
}

void BallSpeedBoost::removeBallEffect() {
    ball.setSpeed(ball.getSpeed() / 2);
    isActive = false;
    BallEffect::display();
}

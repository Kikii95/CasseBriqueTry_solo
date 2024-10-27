#include <iostream>
#include <chrono>
#include <thread>
#include "Pad.h"
#include "Ball.h"
#include "PadSpeedBoost.h"
#include "PadSpeedNerf.h"
#include "BallSpeedBoost.h"
#include "BallSpeedNerf.h"

#define SCREEN_HEIGHT 1080
#define SCREEN_WIDHT 1920


int main() {
    Pad pad(10, 100);
    Ball ball(25, 800, 5, 20);

    pad.displayPosition();
    ball.display();

    PadSpeedBoost PadSpeedBoost(pad, 2000);
    PadSpeedBoost.applyPadEffect();

    BallSpeedBoost BallSpeedBoost(ball, 1000);

    for (int i = 0; i < 20; ++i) {
        ball.move();
        ball.display();

        if (i == 6) {
            BallSpeedBoost.applyBallEffect();
        }

        BallSpeedBoost.update(100);
        PadSpeedBoost.update(100);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return 0;
}

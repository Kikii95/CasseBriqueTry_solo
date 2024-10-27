#include "Ball.h"

Ball::Ball(int posx, int posy, int spd, int size) : positionx(posx), positiony(posy), speed(spd), size(size) {}

void Ball::display() {
    std::cout << "Ball a la position : " << positionx << ", " << positiony << std::endl;
}

void Ball::setSpeed(int spd) {
    speed = spd;
}

int Ball::getSpeed() {
    return speed;
}

void Ball::setPosition(int posx, int posy) {
    positionx = posx;
    positiony = posy;
}

std::pair<int, int> Ball::getPosition() {
    return { positionx, positiony };
}

void Ball::move() {

    positionx += directionX * speed;
    positiony += directionY * speed;

    wallBounce();
}

void Ball::wallBounce() {
    if (positionx <= 0 || positionx >= SCREEN_WIDTH - size) {
        directionX = -directionX;  
    }

    if (positiony <= 0 || positiony >= SCREEN_HEIGHT - size) {
        directionY = -directionY; 
    }

}

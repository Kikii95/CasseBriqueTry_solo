#include "Pad.h"

Pad::Pad(int spd, int size) : positionx(1920 / 2), positiony(1080 - (1080 / 10)), speed(spd), sizex(size), sizey(size / 3) {}

void Pad::moveRight() {
    positionx += speed;
    std::cout << "Move Right !" << std::endl;
}

void Pad::moveLeft() {
    positionx -= speed;
    std::cout << "Move Left !" << std::endl;
}

void Pad::displayPosition() {
    std::cout << "Pad a la position : " << positionx << ", " << positiony << std::endl;
}

void Pad::setSpeed(int spd) {
    speed = spd;
}

int Pad::getSpeed() {
    return speed;
}

void Pad::setPosition(int posx, int posy) {
    positionx = posx;
    positiony = posy;
}

std::pair<int, int> Pad::getPosition() {
    return { positionx, positiony };
}

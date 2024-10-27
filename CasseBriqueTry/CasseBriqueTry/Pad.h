#pragma once
#include <iostream>
#include "Ball.h"

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

class Pad
{
protected:
    int positionx, positiony;
    int speed;
    int sizey, sizex;

public:
    bool isHit = false;

    Pad(int spd, int size);

    void moveRight();
    void moveLeft();

    virtual void setSpeed(int spd);
    virtual int getSpeed();
    virtual void setPosition(int posx, int posy);
    std::pair<int, int> getPosition(); 

    void displayPosition();
};

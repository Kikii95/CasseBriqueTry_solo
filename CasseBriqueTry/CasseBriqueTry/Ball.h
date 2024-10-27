#pragma once
#include <iostream>
#include "Pad.h"

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

class Ball
{
protected:
    int positionx, positiony;
    int speed;
    int size;
    int directionX;  
    int directionY;  

public:
    Ball(int posx, int posy, int spd, int size);

    void move();                   
    void wallBounce();             
    void display();

    void setSpeed(int spd);
    int getSpeed();
    void setPosition(int posx, int posy);
    std::pair<int, int> getPosition();
};

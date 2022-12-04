#pragma once
#include "Rocket.h"

class Imitation
{
private:
    bool _result = true;
    float _currentDistantRocketAndTarget = 0.f;
    Vector _positionTarget;
    Vector _directionTarget;
    Vector _positionRocket;
    Vector _directionRocket;
    float _deltaTime = 0.5f;
    
public:
    void Update();
};

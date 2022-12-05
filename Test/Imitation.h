#pragma once
#include "Rocket.h"

class Imitation
{
private:
    bool _result = true;
    float _currentDistantRocketAndTarget = 0.f;
    float _deltaTime = 0.5f;

    float _coordinatsTargetX = 0.f;
    float _coordinatsTargetY = 7.f;
    float _directionTargetX = 1.f;
    float _directionTargetY = 0.f;
    float _speedTarget = 2.f;
    
    float _coordinatsRocketX = 0.f;
    float _coordinatsRocketY = 0.f;
    float _directionRocketX = 0.f;
    float _directionRocketY = 0.f;
    float _speedRocket = 3.f;

public:
    void Update();
};

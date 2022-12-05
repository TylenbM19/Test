#pragma once
#include "Rocket.h"

struct Parametrs
{
public:
    float CoordinatsX = 0;
    float CoordinatsY = 0;
    float DirectionX = 0;
    float DirectionY = 0;
    float Speed = 0;
};

class Imitation
{
private:
    Target* _target = nullptr;
    Rocket* _rocket = nullptr;

    bool _result = true;
    float _currentDistantRocketAndTarget = 0.f;
    float _deltaTime = 0;

public:
    Imitation(const Parametrs& Rocket,const Parametrs& Target,float DeltaTime);
    void Update();
    ~Imitation();
};


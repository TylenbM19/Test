#pragma once
#include "Movement.h"
#include "Target.h"

class Rocket : public Movement
{
private:
    Target *_target = nullptr;
    const float _radius = 0.5f;
    int _time = 50;

public:
    Rocket(const Vector& Direction,const Vector& Position,float Speed);
    void Move(float DeltaTime) override;
    void SetTarget(Target *target);
    float GetRadius();
    bool IsAlive();
    bool IsAhead();
};

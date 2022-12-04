#pragma once
#include "Movement.h"

class Target : public Movement
{
public:
    Target(const Vector& Direction,const Vector& Position,float Speed);
    void Move(float DeltaTime) override;
};

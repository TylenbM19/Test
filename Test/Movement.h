#pragma once
#include "Vector.h"

class Movement 
{
protected:
    Vector Direction;
    Vector Position;
    float Speed = 0;

public:
    
    Movement(const Vector& Direction,const Vector& Position,float Speed)
    {
        this->Direction = Direction;
        this->Position = Position;
        this->Speed = Speed;
    }

    Movement() = default;
    
    void virtual Move(float DeltaTime) = 0;

    Vector GetPosition();
    Vector GetDirection();
    float GetSpeed();
};
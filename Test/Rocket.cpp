#include "Rocket.h"

void Rocket::SetTarget(Target *target)
{
    _target = target;
}

Rocket::Rocket(const Vector& Direction, const Vector& Position, float Speed)
    :Movement(Direction,Position,Speed)
{   
}

void Rocket::Move(float DeltaTime)
{
    Vector TargetDirection = _target->GetPosition() - Position;
    Direction = Normalize(TargetDirection);
    Position = Position + Direction * Speed * DeltaTime;
    _time--;
}

float Rocket::GetRadius()
{
    return _radius;
}

bool Rocket::IsAlive()
{
    return _time > 0;
}

bool Rocket::IsAhead()
{
    Vector TargetDirection = _target->GetPosition() - Position;
    float Value = DotProduct(TargetDirection, Direction);
    return Value < 0;
}





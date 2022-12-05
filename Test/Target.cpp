#include "Target.h"

Target :: Target(const Vector& Direction, const Vector& Position, float Speed)
    :Movement(Direction,Position,Speed)
{
}

void Target :: Move(float DeltaTime)
{
    Position = Position + Direction * Speed * DeltaTime;
}

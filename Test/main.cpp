#include <iostream>
#include "Imitation.h"

int main(int argc, char* argv[])
{
    Parametrs parametrRocket;
    parametrRocket.DirectionX = 0.f;
    parametrRocket.DirectionY = 0.f;
    parametrRocket.CoordinatsX = 0.f;
    parametrRocket.CoordinatsY = 0.f;
    parametrRocket.Speed = 3.f;

    Parametrs parametrsTarget;
    parametrsTarget.DirectionX = 1.f;
    parametrsTarget.DirectionY = 0.f;
    parametrsTarget.CoordinatsX = 0.f;
    parametrsTarget.CoordinatsY = 5.f;
    parametrsTarget.Speed = 1.f;

    float DeltaTime = 0.1f;

    Imitation imitation(parametrRocket,parametrsTarget,DeltaTime);
    imitation.Update();
    return 0;
}

#include "Imitation.h"

void  Imitation::Update()
{
    Rocket rocket(Vector(0.f,1.f),Vector(0.f,0.f),5.f);
    Target target(Vector(1.f,0.f),Vector(0.f,15.f),2.f);
    rocket.SetTarget(&target);
 
    while(_result)
    {      
        target.Move(_deltaTime);
        rocket.Move(_deltaTime);
        
        _currentDistantRocketAndTarget = Distance(rocket.GetPosition(),target.GetPosition());

        std::cout << _currentDistantRocketAndTarget << '\n';
        
        if (!rocket.IsAlive())
        {
            std::cout << "Rocket destroyed";
            _result = false;
        }

        if(rocket.GetRadius() >= _currentDistantRocketAndTarget)
        {
            std::cout<<"Hit the target";
            _result = false;
        }    

        if (rocket.IsAhead())
        {
            std::cout << "Hit the target";
            _result = false;
        }
    }
}
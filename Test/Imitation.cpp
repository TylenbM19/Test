#include "Imitation.h"

void  Imitation::Update()
{
    Rocket rocket(Vector(_directionRocketX,_directionRocketY),
        Vector(_coordinatsRocketX,_coordinatsRocketY),_speedRocket);

    Target target(Vector(_directionTargetX,_directionTargetY),
        Vector(_coordinatsTargetX,_coordinatsTargetY),_speedTarget);

    rocket.SetTarget(&target);
 
    while(_result)
    {      
        target.Move(_deltaTime);
        rocket.Move(_deltaTime);
        
        _currentDistantRocketAndTarget = Distance(rocket.GetPosition(),target.GetPosition());

        std::cout<< "Distance = " << _currentDistantRocketAndTarget << '\n';
        
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
#include "Imitation.h"

Imitation::Imitation(const Parametrs& rocket, const Parametrs& target, float DeltaTime)
{
    _rocket = new Rocket(Vector(rocket.DirectionX,rocket.DirectionX),
        Vector(rocket.CoordinatsX, rocket.CoordinatsY), rocket.Speed);

    _target = new Target(Vector(target.DirectionX, target.DirectionY),
        Vector(target.CoordinatsX, target.CoordinatsY), target.Speed);

    _rocket->SetTarget(_target);

    _deltaTime = std::abs(DeltaTime);
}

void  Imitation::Update()
{
    if (_deltaTime == 0)
    {
        std::cout << "DeltaTime cannot be null";
        return;
    }

    while(_result)
    {    
        _target->Move(_deltaTime);
        _rocket->Move(_deltaTime);
        
        _currentDistantRocketAndTarget = Distance(_rocket->GetPosition(),_target->GetPosition());

        std::cout<< "Distance = " << _currentDistantRocketAndTarget << '\n';
        
        if(!_rocket->IsAlive())
        {
            std::cout << "Rocket destroyed";
            _result = false;
        }

        if((_rocket->GetRadius() >= _currentDistantRocketAndTarget)||_rocket->IsAhead())
        {
            std::cout<<"Hit the target";
            _result = false;
        }    
    }
}

Imitation::~Imitation()
{
    delete _rocket;
    delete _target;
}

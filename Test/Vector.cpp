#include "Vector.h"

void Show(const Vector &Vec)
{
   std::cout<<"Coordinates x = " << Vec.X <<"Coordinates y = " << Vec.Y;
}

Vector operator+(const Vector &Vec1,const Vector &Vec2)
{
    return Vector(Vec1.X + Vec2.X,Vec1.Y + Vec2.Y);
}

Vector operator*(const Vector &Vec, float Value)
{
    return Vector(Vec.X * Value,Vec.Y * Value);
}

Vector operator-(const Vector &Vec1,const Vector &Vec2)
{
    return Vector(Vec1.X - Vec2.X,Vec1.Y - Vec2.Y);
}

Vector Normalize (const Vector& Vec)
{
    float Scale = Length(Vec);
    return Vector( Vec.X / Scale,Vec.Y / Scale);
}

float DotProduct(const Vector& Vec, const Vector& Vec2)
{
    return (Vec.X * Vec2.X) + (Vec.Y*Vec2.Y);
}

float Length(const Vector& Vec)
{
    return std::sqrt((Vec.X * Vec.X) + (Vec.Y * Vec.Y));
}

float Distance(const Vector &Vec1,const Vector &Vec2)
{
    return Length(Vec1 - Vec2);
}
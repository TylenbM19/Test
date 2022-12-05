#pragma once
#include <iostream>

struct Vector
{
public:
    float X = 0;
    float Y = 0;

    Vector(float X, float Y)
    :X(X)
    ,Y(Y)
    {}

    Vector() = default;
};

    Vector operator+(const Vector &Vec1,const Vector &Vec2);
    Vector operator*(const Vector&Vec,float Value);
    Vector operator-(const Vector &Vec1,const Vector &Vec2);
    Vector Normalize(const Vector &Vec);
    float DotProduct(const Vector& Vec, const Vector& Vec2);
    float Length(const Vector &Vec);
    void Show(const Vector &Vec);
    float Distance(const Vector &Vec1,const Vector &Vec2);
    
#include "Trapeze.h"

Trapeze::Trapeze(double a, double b, double c, double d, double h, std::string n)
    : Quadrangle(a, b, c, d, n)
{
    height = h;
}

double Trapeze::GetArea()
{
    return (sideB + sideD) * height / 2;
}
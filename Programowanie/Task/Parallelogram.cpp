#include "Parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double c, double d, double h, std::string n)
    : Trapeze(a, b, c, d, h, n)
{

}


double Parallelogram::GetArea()
{
    return sideA * height;
}
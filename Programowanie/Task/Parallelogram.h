#pragma once
#include <iostream>
#include "Trapeze.h"

class Parallelogram : public Trapeze
{
public:
    Parallelogram(double a, double b, double c, double d, double h, std::string n);
    double GetArea();
};
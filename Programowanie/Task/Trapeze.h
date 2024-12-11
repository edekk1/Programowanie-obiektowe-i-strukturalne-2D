#pragma once
#include <iostream>
#include "Quadrangle.h"

class Trapeze : public Quadrangle
{
protected:
	double height;
public:

	Trapeze(double a, double b, double c, double d, double h, std::string n);
	double GetArea();
};
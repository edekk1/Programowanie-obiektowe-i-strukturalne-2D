#pragma once
#include <iostream>
#include "Quadrangle.h"

class Rectangle : public Quadrangle
{
public:
	Rectangle(double a, double b, std::string n);

	double GetArea();
};
#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Trapeze.h"

//Napisz klasy kt�re opisz� figury geometryczne: 
// trapez, romb, r�wnoleg�obok, prostok�t i kwadrat.
// Zdefiniuj podstawowe metody.

int main()
{
	setlocale(LC_CTYPE, "polish");
	Rectangle rectangle(5, 6, "prostok�t");
	rectangle.ShowInfo();

	Square square(4, "kwadrat");
	square.ShowInfo();

	Parallelogram parallelogram(5, 4, 5, 4, 5, "r�wnoleg�obok");
	parallelogram.ShowInfo();

	/*Rhombus rhombus(8,6,6);
	rhombus.ShowInfo();*/

	Trapeze trapeze(6, 5, 5, 4, 5, "trapez");
	trapeze.ShowInfo();
}
#include <iostream>

namespace task2Namespace
{

	//Napisz program, który pobierze wspó³rzêdne 2D i obliczy jak daleko jest ten punkt od œrodka uk³adu wspó³rzêdnych
	struct point
	{
		double x;
		double y;
	};

	void getCoordinate(double& x, double& y)
	{
		std::cout << "Podaj wspó³rzêdn¹ x:\n";
		std::cin >> x;

		std::cout << "Podaj wspó³rzêdn¹ y:\n";
		std::cin >> y;
	}

	void getCoordinate(point &p)
	{
		std::cout << "Podaj wspó³rzêdn¹ x:\n";
		std::cin >> p.x;

		std::cout << "Podaj wspó³rzêdn¹ y:\n";
		std::cin >> p.y;
	}

	void task2()
	{
		point firstPoint;
		//firstPoint.x = 5;
		//firstPoint.y = 5;

		getCoordinate(firstPoint);

		double distance = sqrt(firstPoint.x * firstPoint.x + firstPoint.y * firstPoint.y);

		std::cout << "Odleg³oœæ od œrodka to: " << distance;
	}
}





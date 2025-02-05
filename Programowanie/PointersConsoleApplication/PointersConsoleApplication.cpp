#include <iostream>

int main()
{
	int firstVar = 5;
	int secondVar = 9;

	std::cout << "firstVar = " << firstVar << "\n";
	std::cout << "adres zmiennej firstVar = " << (&firstVar) << "\n";
	std::cout << "secondVar = " << secondVar << "\n";
	std::cout << "adres zmiennej secondVar = " << (&secondVar) << "\n";
}



#include <iostream>
#include <fstream>
#include <vector>
#include <string>
//Matura 2022 Informatyka Poziom Rozsze¿ony

int main()
{
	//Zadanie pierwsze
	setlocale(LC_CTYPE, "Polish");
	std::ifstream file("przyklad.txt");
	std::vector<int> numbers;
	int number;

	while (file >> number)
	{
		numbers.push_back(number);
	}

	int counter = 0;
	int first = 0;
	for (int number : numbers)
	{
		std::string str = std::to_string(number);

		if (str.length() > 0)
		{
			if (str.front() == str.back())
			{
				if (first == 0)
				{
					first = std::stoi(str);
				}
				counter++;
			}
		}
	}

	std::cout << counter << " " << first << "\n";
}

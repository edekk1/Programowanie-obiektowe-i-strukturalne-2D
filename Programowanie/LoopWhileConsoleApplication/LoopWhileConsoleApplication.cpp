#include <iostream>

//Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
void task1()
{
	
	int number, numberOfDigit = 1;
	
	do
	{
		std::cout << "Podaj liczbê dodatni¹: \n";
		std::cin >> number;
	} while (number < 0);
	/*
	if (number > 9)
	{
		number = number / 10;
		numberOfDigit++;
		if (number > 9)
		{
			number = number / 10;
			numberOfDigit++;
			if (number > 9)
			{
				//...
			}
		}
	}
	*/

	while (number > 9)
	{
		number = number / 10;
		numberOfDigit++;
	}

	std::cout << "Iloœæ cyfr w liczbie wynosi: " << numberOfDigit;
}

//Napisz program, który policzy NWD dwóch liczb.
/*
	 Wzór na NWD = { a , b = 0												}
				   { NWD(b, a % b), b != 0 (skreœlony znak równoœci, nie !=)}
*/
void task2()
{
	int firstNumber, secondNumber;

	do
	{
		std::cout << "Podaj pierwsz¹ liczbê dodatni¹: \n";
		std::cin >> firstNumber;
	} while (firstNumber < 0);

	do
	{
		std::cout << "Podaj drug¹ liczbê dodatni¹: \n";
		std::cin >> secondNumber;
	} while (secondNumber < 0);

	/*if (secondNumber != 0)
	{
		int tmpfirstNumber = firstNumber;
		firstNumber = secondNumber;
		secondNumber = tmpfirstNumber % secondNumber;
		if (secondNumber != 0)
		{
			//...
		}
	}
	*/

	while (secondNumber != 0)
	{
		int tmpfirstNumber = firstNumber;
		firstNumber = secondNumber;
		secondNumber = tmpfirstNumber % secondNumber;
	}

	std::cout << "NWD = " << firstNumber;
}

/*
Miasto T. ma obecnie 100 tys. mieszkañców, ale jego populacja roœnie co roku o 3% rocznie.
Miasto B. ma 300 tys. mieszkañców i ta liczba roœnie w tempie 2% na rok.
 Wykonaj symulacjê prezentuj¹c¹ liczbê mieszkañców w obu miastach i zatrzymuj¹c¹ siê,
 gdy liczba mieszkañców miasta T. przekroczy liczbê z miasta B.
*/

//W tej pêtli s¹ 2 zmienne streuj¹ce, zale¿y co jest w warunku
void task3()
{
	double tCityPopulation = 100000, bCityPopulation = 300000;
	int years = 0;

	while (tCityPopulation < bCityPopulation)
	{
		tCityPopulation = tCityPopulation * 1.03;
		bCityPopulation = bCityPopulation * 1.02;
		years++;
	}

	std::cout << "Populacja miasta T wynios³a " << tCityPopulation << " po " << years << " latach\n";
	std::cout << "Populacja miasta B wynios³a " << bCityPopulation << " po " << years << " latach";
}

//Sprawdzenie czy liczba jest palindromem
void task4()
{
	int number;
	
	do
	{
		std::cout << "Podaj liczbê dodatni¹: \n";
		std::cin >> number;
	} while (number < 0);

	int tmpNumber = number;
	int reversNumber = 0;
	while ( tmpNumber > 0)
	{
		int rest = tmpNumber % 10;
		reversNumber = reversNumber * 10 + rest;
		tmpNumber = tmpNumber / 10;
	}

	if (number == reversNumber)
		std::cout << "Liczba jest palindromem";
	else
		std::cout << "Liczba jest nie palindromem";
}

//Napisz program, który wyœwietli "Hello World" tyle razy ile chce u¿ytkownik
void task5()
{
	int number, counter = 0;

	do
	{
		std::cout << "Podaj liczbê dodatni¹: \n";
		std::cin >> number;
	} while (number < 0);

	
	while (counter != number)
	{
		std::cout << "Hello World\n";
		counter++;
	}
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task5();
}
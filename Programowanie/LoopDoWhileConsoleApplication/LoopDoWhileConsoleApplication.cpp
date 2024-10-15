#include <iostream>

//Napisz program który, wczyta od u¿ytkownika liczbê dodatni¹
void task1()
{
/*  int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	if (number < 0)
	{
		std::cout << "Podaj liczbê dodatni¹\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "Podaj liczbê dodatni¹\n";
			std::cin >> number;
			if (number < 0)
			{
				std::cout << "Podaj liczbê dodatni¹\n";
				std::cin >> number;
				if (number < 0)
				{
					//...
					//b³êdny algorytm
				}
			}
		}
	}
	std::cout << "Podano liczbê " << number << "\n";
*/

	int number;
	do
	{
		std::cout << "Podaj liczbê\n";
		std::cin >> number;
	} while (number < 0);
	std::cout << "Podano liczbê " << number << "\n";
}

//Napisz program, który wylosuje liczbê, a nastêpnie u¿ytkownik bêdzie musia³ j¹ odgadn¹æ
void task2()
{
	int randomNumber, numberFromUser, userAttempt;

	userAttempt = 0;
	srand(time(0));
	randomNumber = rand() % 101;

	std::cout << "Wylosowano liczbê z zakresu od 0 do 100 odgadnij j¹.\n";
	
	do
	{
		std::cout << "Podaj liczbê: \n";
		std::cin >> numberFromUser;
		userAttempt++;

		if (numberFromUser < randomNumber)
			std::cout << "Liczba jest za ma³a\n";
		else if (numberFromUser > randomNumber)
			std::cout << "Liczba jest za du¿a\n";
		else
			std::cout << "Zgad³eœ " << "po " << userAttempt << " prób(ie)ach.\n" << "Wylosowan¹ liczb¹ jest: " << randomNumber << "\n";
	} while (numberFromUser != randomNumber);
}

//Napisz program wyœwietlaj¹cy liczby ca³kowite z przedia³u <0; x>, x podaje u¿ytkownik;
void task3()
{
	/*
	1.Nieprawid³owo
	int upperRange;
	
	std::cout << "Podaj górny zakres: ";
	std::cin >> upperRange;

	std::cout << "0, ";
	if (upperRange >= 1)
	{
		std::cout << "1, ";
		if (upperRange >= 2)
		{
			std::cout << "2, ";
			if (upperRange >= 3)
			{
				std::cout << "3, ";
				//......
			}
		}
	}
	*/

	//Prawid³owo
	long long upperRange;

	std::cout << "Podaj górny zakres: ";
	std::cin >> upperRange;

	int number = 0;
	do
	{
		std::cout << number << ", ";
		number++;
	}while (upperRange >= number);
}

//Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
void task4()
{
	int number, rest, sumOfDigits = 0;

	do
	{
		std::cout << "Podaj liczbê dodatni¹: \n";
		std::cin >> number;
	} while (number < 0);
	
	do
	{
		rest = number % 10;
		std::cout << rest << ", ";
		sumOfDigits = sumOfDigits + rest;
		number = number / 10;
	} while (number > 0);

	std::cout << "\nSuma cyfr wynosi: " << sumOfDigits;
}

//Napisz program, który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej.Nastêpnie program powinien obliczyæ i wyœwietliæ liczbê cyfr.
void task5()
{
	int number, numberOfDigits = 0, rest;

	do
	{
		std::cout << "Podaj liczbê dodatni¹: \n";
		std::cin >> number;
	} while (number < 0);
	
	do
	{
		number = number / 10;
		numberOfDigits++;
	} while (number > 0);

	std::cout << "Iloœæ cyfr wynosi: " << numberOfDigits;
}

//Napisz program, który sprawdza czy wiêcej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.
void task6()
{
	int number, evenNumbers = 0, oddNumbers = 0, digit;

	do
	{
		std::cout << "Podaj liczbê dodatni¹: \n";
		std::cin >> number;
	} while (number < 0);

	do
	{
		digit = number % 10;
		
		if (digit % 2 == 0)
			evenNumbers++;
		else
			oddNumbers++;
		number = number / 10;
	} while (number > 0);

	if (evenNumbers > oddNumbers)
		std::cout << "Wiêcej jest cyfr parzystych. Oto ile ich jest:" << evenNumbers << "\n";
	else if (oddNumbers > evenNumbers)
		std::cout << "Wiêcej jest liczb nieparzystych. Oto ile ich jest:" << oddNumbers << "\n";
	else
		std::cout << "Liczb parzystych i nieparzystych jest tyle samo." << "\n";

}

//Poproœ u¿ytkownika o podawanie liczb, a¿ wprowadzi zero. Oblicz sumê oraz œredni¹ arytmetyczn¹ wprowadzonych liczb.
void task7()
{
	int number, sum = 0, arithmeticAverage = 0, divider = 0;
	
	do
	{
		std::cout << "Podawaj liczby dodatnie: \n";
		std::cin >> number;
		sum += number;
		divider++;
	} while (number != 0);

	divider--;
	std::cout << "\nSuma liczb wynosi: " << sum;
	arithmeticAverage = sum / divider;
	std::cout << "\nŒrednia arytmetyczna wynosi: " << arithmeticAverage;
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task6();
}
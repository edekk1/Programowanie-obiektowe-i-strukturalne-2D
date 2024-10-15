#include <iostream>

/*

Priorytety operatorów:

* /
+ -
> < >= <= == !=
&&
||
=

Operatory porównania:
>   wiêkszoœci
<   mniejszoœci
>=  wieksze b¹dŸ równe
<=  mniesze b¹dŸ równe
==  równe
!=  ró¿ne

Operatory logiczne:

||  or/lub
&&  and/i
!   not/nie


 A  B   A || B      A && B      !A
 f  f      f           f         t
 f  t      t           f
 t  f      t           f         f
 t  t      t           t


*/

//Napisz program, który pobierze liczbê od u¿ytkownika i wyœwietli czy jest ona dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczbê \n";
	std::cin >> number;

	//wersja 1
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}

	if (number <= 0)
	{
		std::cout << "Liczba jest ujemna\n";
	}

	//wersja 2
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}
	else
	{
		std::cout << "Liczba jest ujemna\n";
	}


}

//Napisz program, który wczyta liczbê
//i sprawdzi czy jest ona z zakresu <1;10).
void task2()
{
	int number;
	std::cout << "Podaj liczbê \n";
	std::cin >> number;

	//wersja 1
	if (number >= 1)
	{
		if (number < 10)
		{
			std::cout << "Liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "Liczba nie jest w zakresie\n";
		}
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}

	//wersja 2
	if (number >= 1 && number < 10)
	{
		std::cout << "Liczba jest w zakresie\n";
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}
}

void task3()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> thirdNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> fourthNumber;

	if (fourthNumber > firstNumber && fourthNumber > secondNumber && fourthNumber > thirdNumber)
	{
		std::cout << "Najwiêksza wartoœæ to " << fourthNumber << "\n";
	}
	else
	{
		if (thirdNumber > firstNumber && thirdNumber > secondNumber)
			std::cout << "Najwiêksza wartoœæ to " << thirdNumber << "\n";
		else
		{
			if (secondNumber > firstNumber)
				std::cout << "Najwiêksza wartoœæ to " << secondNumber << "\n";
			else
				std::cout << "Najwiêksza liczba to " << firstNumber << "\n";
		}
	}
}

//Napisz program, który wczyta jedn¹ liczbê i wyœwietli j¹ w kolejnoœci rosn¹cej.
void task4()
{
	int firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;

	std::cout << "Liczby w kolejnoœci rosn¹cej:\n";
	std::cout << firstNumber;
	std::cout << "\n";
}


//Napisz program, który wczyta dwie liczby i wyœwietli je w kolejnoœci rosn¹cej.
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;

	std::cout << "Liczby w kolejnoœci rosn¹cej:\n";
	if (firstNumber > secondNumber)
		std::cout << secondNumber << "," << firstNumber;
	else
		std::cout << firstNumber << "," << secondNumber;
}

//Napisz program, który wczyta trzy liczby i wyœwietli je w kolejnoœci rosn¹cej.
void task6()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> thirdNumber;

	std::cout << "Liczby w kolejnoœci rosn¹cej:\n";
	if (thirdNumber < firstNumber
		&& thirdNumber < secondNumber)
	{
		std::cout << thirdNumber << ", ";
		if (secondNumber < firstNumber)
			std::cout << secondNumber << ", " << firstNumber;
		else
			std::cout << firstNumber << ", " << secondNumber;
	}
	else
	{
		if (secondNumber < firstNumber)
		{
			std::cout << secondNumber << ", ";
			if (thirdNumber < firstNumber)
				std::cout << thirdNumber << ", " << firstNumber;
			else
				std::cout << firstNumber << ", " << thirdNumber;
		}
		else
			std::cout << firstNumber << ", ";
		if (thirdNumber < secondNumber)
			std::cout << thirdNumber << ", " << secondNumber;
		else
			std::cout << secondNumber << ", " << thirdNumber;
	}

}

//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe.Wyœwietl odpowiedni komunikat.
void task7()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj dwie liczby ca³kowite, aby sprawdziæ czy s¹ równe";
	std::cout << "Podaj pierwsz¹ liczbê:\n";
	std::cin >> firstNumber;
	std::cout << "Podaj drug¹ liczbê:\n";
	std::cin >> secondNumber;

	if (firstNumber == secondNumber)
		std::cout << "Liczby s¹ sobie równe";
	else
		std::cout << "Liczby s¹ ró¿ne";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona parzysta. Wyœwietl odpowiedni komunikat.
void task8()
{
	int numberFromUser;
	std::cout << "Podaj liczbê, aby sprawdziæ czy jest parzysta";
	std::cout << "Podaj liczbê:\n";
	std::cin >> numberFromUser;

	if (numberFromUser % 2 == 0)
		std::cout << "Liczba jest parzysta";
	else
		std::cout << "Liczba nie jest parzysta";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
void task9()
{
	int numberFromUser;
	std::cout << "Program sprawdza czy liczba jest podzielna przez 3 i przez 5\n";
	std::cout << "Podaj liczbê:\n";
	std::cin >> numberFromUser;

	if (numberFromUser % 3 == 0 && numberFromUser % 5 == 0)
		std::cout << "Liczba jest podzielna przez 3 i przez 5";
	else
		std::cout << "Liczba nie jest podzielna przez te liczby";
}

/*Napisz program, który poprosi u¿ytkownika o podanie masy cia³a(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wskaŸnik BMI(Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
BMI = masa / wzrost ^ 2
poni¿ej 16 - wyg³odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagê
18.5 - 24.99 - wagê prawid³ow¹
25.0 - 29.9 - nadwagê
30.0 - 34.99 - I stopieñ oty³oœci
35.0 - 39.99 - II stopieñ oty³oœci
powy¿ej 40.0 - oty³oœæ skrajn¹
*/
void task10()
{
	float heightFromUser, weightFromUser, BMI;
	std::cout << "Program oblicza BMI\n";
	std::cout << "Podaj swój wzrost\n";
	std::cin >> heightFromUser;
	std::cout << "Podaj swoj¹ wagê\n";
	std::cin >> weightFromUser;

	BMI = weightFromUser / (heightFromUser * heightFromUser);

	if (BMI < 16)
		std::cout << "Jesteœ wyg³odzony";
	else if (BMI >= 16 && BMI <= 16.99)
		std::cout << "Jesteœ wychudzony";
	else if (BMI >= 17 && BMI <= 18.49)
		std::cout << "Masz niedowagê";
	else if (BMI >= 18.5 && BMI <= 24.99)
		std::cout << "Masz prawid³ow¹ wagê";
	else if (BMI >= 25 && BMI <= 29.9)
		std::cout << "Masz nadwagê";
	else if (BMI >= 30 && BMI <= 34.99)
		std::cout << "Masz I stopieñ oty³oœci";
	else if (BMI >= 35 && BMI <= 39.99)
		std::cout << "Masz II stopieñ oty³oœci";
	else
		std::cout << "Masz skrajn¹ oty³oœæ";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
void task11()
{
	int numberFromUser;
	std::cout << "Podaj liczbê ca³kowit¹ od 1 do 7\n";
	std::cin >> numberFromUser;

	if (numberFromUser == 1)
		std::cout << "Poniedzia³ek";
	else if (numberFromUser == 2)
		std::cout << "Wtorek";
	else if (numberFromUser == 3)
		std::cout << "Œroda";
	else if (numberFromUser == 4)
		std::cout << "Czwartek";
	else if (numberFromUser == 5)
		std::cout << "Pi¹tek";
	else if (numberFromUser == 6)
		std::cout << "Sobota";
	else if (numberFromUser == 7)
		std::cout << "Niedziela";
	else
		std::cout << "Nie ma takiego dnia tygodnia";

	switch (numberFromUser)
	{
	case 1:
		std::cout << "Poniedzia³ek";
		break;
	case 2:
		std::cout << "Wtorek";
		break;
	case 3:
		std::cout << "Œroda";
		break;
	case 4:
		std::cout << "Czwartek";
		break;
	case 5:
		std::cout << "Pi¹tek";
		break;
	case 6:
		std::cout << "Sobota";
		break;
	case 7:
		std::cout << "Niedziela";

	default:
		std::cout << "Nie ma takiego dnia tygodnia";
		break;
	}
}

//switch jeœli jest szereg ifów które maj¹ tylko "=="
//(koñcowy else) deafult

//Napisz program, który wczyta numer miesi¹ca i wyœwietli jego s³owny odpowiednik.
void task12()
{
	int numberFromUser;
	std::cout << "Podaj liczbê ca³kowit¹ od 1 do 12\n";
	std::cin >> numberFromUser;

	if (numberFromUser == 1)
		std::cout << "Styczeñ";
	else if (numberFromUser == 2)
		std::cout << "Luty";
	else if (numberFromUser == 3)
		std::cout << "Marzec";
	else if (numberFromUser == 4)
		std::cout << "Kwiecieñ";
	else if (numberFromUser == 5)
		std::cout << "Maj";
	else if (numberFromUser == 6)
		std::cout << "Czerwiec";
	else if (numberFromUser == 7)
		std::cout << "Lipiec";
	else if (numberFromUser == 8)
		std::cout << "Sierpieñ";
	else if (numberFromUser == 9)
		std::cout << "Wrzesieñ";
	else if (numberFromUser == 10)
		std::cout << "PaŸdziernik";
	else if (numberFromUser == 11)
		std::cout << "Listopad";
	else if (numberFromUser == 12)
		std::cout << "Grudzieñ";
	else
		std::cout << "Nie ma takiego miesi¹ca";

	switch (numberFromUser)
	{
	case 1:
		std::cout << "Styczeñ";
		break;

	case 2:
		std::cout << "Luty";
		break;

	case 3:
		std::cout << "Marzec";
		break;

	case 4:
		std::cout << "Kwiecieñ";
		break;

	case 5:
		std::cout << "Maj";
		break;

	case 6:
		std::cout << "Czerwiec";
		break;

	case 7:
		std::cout << "Lipiec";
		break;

	case 8:
		std::cout << "Sierpieñ";
		break;

	case 9:
		std::cout << "Wrzesieñ";
		break;

	case 10:
		std::cout << "PaŸdziernik";
		break;

	case 11:
		std::cout << "Listopad";
		break;

	case 12:
		std::cout << "Grudzieñ";
		break;

	default:
		std::cout << "Nie ma takiego miesi¹ca";
		break;
	}
}

//Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
void task13()
{
	long yearFromUser;
	std::cout << "Podaj rok\n";
	std::cin >> yearFromUser;

	if (yearFromUser % 4 == 0 && yearFromUser % 100 != 0)
		std::cout << "Rok jest przestêpny";
	else
		std::cout << "Rok nie jest przestêpny";
}


//Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia. Wyœwietl odpowiedni komunikat.
void task14()
{
	int ageFromUser;
	std::cout << "Podaj swój wiek\n";
	std::cin >> ageFromUser;

	if (ageFromUser >= 18)
		std::cout << "Jesteœ pe³noletni";
	else
		std::cout << "Nie jesteœ pe³noletni";
}

//Napisz program, który poprosi u¿ytkownika o podanie oceny w skali 100-punktowej i przeliczy j¹ na ocenê procentow¹ w przedziale od 0 do 100. Wyœwietl wynik.
void task15()
{
	float amountOfPoints, precentageRating;
	std::cout << "Podaj iloœæ punktów\n";
	std::cin >> amountOfPoints;

	precentageRating = amountOfPoints / 100 * 100;

	std::cout << "Ocena to: " << precentageRating << "%";
}

//Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
void task16()
{
	int numerFromUser;
	std::cout << "Podaj swoj¹ ocenê\n";
	std::cin >> numerFromUser;

	if (numerFromUser == 6)
		std::cout << "Celuj¹cy";
	else if (numerFromUser == 5)
		std::cout << "Bardzo dobry";
	else if (numerFromUser == 4)
		std::cout << "Dobry";
	else if (numerFromUser == 3)
		std::cout << "Dostateczny";
	else if (numerFromUser == 2)
		std::cout << "Dopuszczaj¹cy";
	else
		std::cout << "Niedostateczny";
}


//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t. Wyœwietl odpowiedni komunikat.
void task17()
{
	float firstSide, secondSide, thirdSide;
	std::cout << "Podaj d³ugoœæ trzech odcinków, aby sprawdziæ czy da siê zbudowaæ z nich trójk¹t\n";
	std::cout << "Podaj d³ugoœæ pierwszego odcinka\n";
	std::cin >> firstSide;
	std::cout << "Podaj d³ugoœæ drugiego\n";
	std::cin >> secondSide;
	std::cout << "Podaj d³ugoœæ trzeciego odcinka\n";
	std::cin >> thirdSide;

	if (firstSide < secondSide + thirdSide && secondSide < firstSide + thirdSide && thirdSide < firstSide + secondSide)
		std::cout << "Da siê stworzyæ taki trójk¹t";
	else
		std::cout << "Nie da siê stworzyæ takiego trójk¹ta";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
void task18()
{
	int numberFromUser;
	std::cout << "Podja liczbê ca³kowit¹, aby obliczyæ wartoœæ bezwzglêdn¹\n";
	std::cin >> numberFromUser;

	if (numberFromUser < 0)
		std::cout << "Wartoœæ bezwzglêdna tej liczby to: " << numberFromUser * (-1);
	else
		std::cout << "Wartoœæ bezwzglêdna tej liczby to:" << numberFromUser;
}

//Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
void task19()
{
	int day, month, year;
	std::cout << "Program sprawdzi czy podana data jest poprawna\n";
	std::cout << "Podaj dzieñ:\n";
	std::cin >> day;
	std::cout << "Podaj miesi¹c:\n";
	std::cin >> month;
	std::cout << "Podaj rok:\n";
	std::cin >> year;

	std::cout << "Oto twoja data:\n";
	std::cout << day << "." << month << "." << year;
	std::cout << "\nTeraz zostanie ona zweryfikowana\n";

	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day >= 1 && day <= 31)
		std::cout << "Poprawna data\n";
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day >= 1 && day <= 30)
		std::cout << "Poprawna data\n";
	else if (month == 2 && day >= 1 && day <= 28 && ((year % 4) != 0 || ((year % 100) == 0 && (year % 400) != 0)))
		std::cout << "Poprawna data\n";
	else if (month == 2 && day >= 1 && day <= 29)
		std::cout << "Poprawna data\n";
	else
		std::cout << "Niepoprawna data\n";
}

//Napisz program, który na podstawie wspó³czynników równania kwadratowego (a, b, c) sprawdzi, czy to równanie ma rozwi¹zania rzeczywiste, i jeœli tak, to je obliczy.
void task20()
{
	//idk
}


int main()
{
	setlocale(LC_CTYPE, "polish");
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
	//task14();
	//task15();
	//task16();
	//task17();
	//task18();
	//task19();
	//task20();
	
}
#include <iostream>

//Napisz program, który wczyta od u¿ytkownika jego wiek a nastêpnie wyœwietli go na konsoli
void task1()
{
	short ageFromUser;

	std::cout << "Podaj swoj wiek: ";
	std::cin >> ageFromUser;

	std::cout << "Masz " << ageFromUser << " lat.\n";
}

//Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry, milimetry i kilometry. Wyœwitetl wynik.
void task2()
{
	float  lenghtInMeterFromUser;

	std::cout << "Podaj dlugosc w metrach: ";
	std::cin >> lenghtInMeterFromUser;

	float  lenghtInCentimiterFromUser;
	lenghtInCentimiterFromUser = lenghtInMeterFromUser * 100;

	float  lenghtInMilimiterFromUser;
	lenghtInMilimiterFromUser = lenghtInCentimiterFromUser * 10;

	float  lenghtInKilometerFromUser;
	lenghtInKilometerFromUser = lenghtInMeterFromUser / 1000;

	std::cout << "Metry: " << lenghtInMeterFromUser << "\n";
	std::cout << "Centymetry: " << lenghtInCentimiterFromUser << "\n";
	std::cout << "Milimetry: " << lenghtInMilimiterFromUser << "\n";
	std::cout << "Kilometry: " << lenghtInKilometerFromUser << "\n";

}

//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta.
void task3()
{
	float sideLengthA, sideLenghtB, area;

	std::cout << "Program oblicza pole prostok¹ta" << "\n";
	std::cout << "Podaj d³ugoœæ boku a: " << "\n";
	std::cin >> sideLengthA;
	std::cout << "Podaj d³ugoœæ boku b: " << "\n";
	std::cin >> sideLenghtB;
	std::cout << "\n";

	area = sideLengthA * sideLenghtB;

	std::cout << "Pole tego prostok¹ta wynosi: " << area << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.
void task4()
{
	float sideLengthA, sideLenghtH, area;

	std::cout << "Program oblicza pole trójk¹ta" << "\n";
	std::cout << "Podaj d³ugoœæ boku a: " << "\n";
	std::cin >> sideLengthA;
	std::cout << "Podaj d³ugoœæ boku h: " << "\n";
	std::cin >> sideLenghtH;

	area = sideLengthA * sideLenghtH / 2;

	std::cout << "\n";
	std::cout << "Pole tego trójk¹ta wynosi: " << area;
}

//Napisz program, który poprosi u¿ytkownika o podanie promienia ko³a i obliczy pole tego ko³a, wyœwietlaj¹c wynik.
void task5()
{
	float area, pi_number = 3.14, radius_from_user;

	std::cout << "Program oblicza pole powierzchni ko³a" << "\n";
	std::cout << "Podaj d³ugoœæ promienia: " << "\n";
	std::cin >> radius_from_user;

	area = pi_number * radius_from_user;

	std::cout << "Pole tego ko³a wynosi: " << area << "\n";
}


//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik.
void task6()
{
	float sideLengthA, sideLengthB, sideLengthH, area;

	std::cout << "Program oblicza pole powierzchni trapezu";
	std::cout << "Podaj d³ugoœæ podstawy a: " << "\n";
	std::cin >> sideLengthA;
	std::cout << "Podaj d³ugoœæ podstawy b: " << "\n";
	std::cin >> sideLengthB;
	std::cout << "Podaj d³ugoœæ podstawy h: " << "\n";
	std::cin >> sideLengthH;

	area = (sideLengthA + sideLengthB) * sideLengthH / 2;

	std::cout << "Pole tego trapezu wynosi: " << area << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci krawêdzi szeœcianu i obliczy jego objêtoœæ, wyœwietlaj¹c wynik.
void task7()
{
	float sideOfTheCubeFromUser, volume;

	std::cout << "Program oblicza objêtoœæ szesæianu" << "\n";
	std::cout << "Podaj krawêdŸ szeœcianu: " << "\n";
	std::cin >> sideOfTheCubeFromUser;

	volume = sideOfTheCubeFromUser * sideOfTheCubeFromUser * sideOfTheCubeFromUser;

	std::cout << "Objêtoœæ tego szeœcianu wynosi: " << volume << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.
void task8()
{
	float degreesCelciusFromUser, degreesFarenheit;

	std::cout << "Program przelicza temperature ze stopni Celcjusza na stopnie Farenheita" << "\n";
	std::cout << "Podaj temperature w stopniah celcjusza: " << "\n";
	std::cin >> degreesCelciusFromUser;

	degreesFarenheit = 1.8 * degreesCelciusFromUser + 32;

	std::cout << "Temperatura w stopniach Farenheit wynosi: " << degreesFarenheit << "\n";
}

//Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.
void task9()
{
	float amountInPln, amountInEuroFromUser;

	std::cout << "Program konwertuje kwotê w euro na z³otówki" << "\n";
	std::cout << "Podaj kwote w euro: " << "\n";
	std::cin >> amountInEuroFromUser;

	amountInPln = amountInEuroFromUser * 4.42;

	std::cout << "Kwota w z³otówkach wynosi: " << amountInPln << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb (a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.
void task10()
{
	float variableA, variableB, arithmeticAverage;

	std::cout << "Program wylicza œredni¹ arytmetyczn¹ dwóch liczb" << "\n";
	std::cout << "Podaj liczbê a: " << "\n";
	std::cin >> variableA;
	std::cout << "Podaj liczbê b: " << "\n";
	std::cin >> variableB;

	arithmeticAverage = (variableA + variableB) / 2;

	std::cout << "Œrednia arytmetyczna tych liczb wynosi: " << arithmeticAverage << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie trzech liczb (a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.
void task11()
{
	float variableA, variableB, variableC, arithmeticAverage;

	std::cout << "Program wylicza œredni¹ arytmetyczn¹ dwóch liczb" << "\n";
	std::cout << "Podaj liczbê a: " << "\n";
	std::cin >> variableA;
	std::cout << "Podaj liczbê b: " << "\n";
	std::cin >> variableB;
	std::cout << "Podaj liczbê c: " << "\n";
	std::cin >> variableC;

	arithmeticAverage = (variableA + variableB + variableC) / 3;

	std::cout << "Œrednia arytmetyczna tych liczb wynosi: " << arithmeticAverage << "\n";
}

//Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task12()
{
	float variableA, variableB, variableC, weightedArithmeticAverage;

	std::cout << "Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3." << "\n";
	std::cout << "Podaj liczbê a: " << "\n";
	std::cin >> variableA;
	std::cout << "Podaj liczbê b" << "\n";
	std::cin >> variableB;
	std::cout << "Podaj liczbê c: " << "\n";
	std::cin >> variableC;

	weightedArithmeticAverage = (1 * variableA + 2 * variableB + 3 * variableC) / 3;

	std::cout << "Œrednia wa¿ona tych liczb wynosi: " << weightedArithmeticAverage << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych. Nastêpnie wykona operacje (+, -, *, /) i wyœwietli wyniki.
void task13()
{
	float variableA, variableB, result1, result2, result3, result4;

	std::cout << "Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych. Nastêpnie wykona operacje (+, -, *, /) i wyœwietli wyniki." << "\n";
	std::cout << "Podaj liczbê a: " << "\n";
	std::cin >> variableA;
	std::cout << "Podaj liczbê b: " << "\n";
	std::cin >> variableB;

	result1 = variableA + variableB;
	result2 = variableA - variableB;
	result3 = variableA * variableB;
	result4 = variableA / variableB;

	std::cout << "Oto wyniki operacji (+, -, *, /): " << "\n" << result1 << "\n" << result2 << "\n" << result3 << "\n" << result4 << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyœwietlaj¹c wynik.
void task14()
{
	float numberOfSecond, numberOfMinutes, numberOfHours;

	std::cout << "Podaj liczbê sekund: " << "\n";
	std::cin >> numberOfSecond;

	numberOfMinutes = numberOfSecond / 60;
	numberOfHours = numberOfMinutes / 60;

	std::cout << "Liczba minut wynosi: " << numberOfMinutes << "\n";
	std::cout << "Liczba godzin wynosi: " << numberOfHours << "\n";
}

// Napisz program, który poprosi u¿ytkownika o podanie wspó³rzêdnych (x1, y1) i (x2, y2) dwóch punktów w uk³adzie kartezjañskim, a nastêpnie obliczy odleg³oœæ miêdzy nimi, wyœwietlaj¹c wynik.
void task15()
{
	int variable_x1, variable_y1, variable_x2, variable_y2, result;

	std::cout << "Podaj wartoœæ x1: " << "\n";
	std::cin >> variable_x1;
	std::cout << "Podaj wartoœæ y1: " << "\n";
	std::cin >> variable_y1;
	std::cout << "Podaj wartoœæ x2: " << "\n";
	std::cin >> variable_x2;
	std::cout << "Podaj wartoœæ y2: " << "\n";
	std::cin >> variable_y2;

	result = (variable_x2 - variable_x1);

	std::cout << "Odleg³oœæ miêdzy nimi wynosi: " << result << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
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
	task14();
	//task15();
}



/*
Algorytm - skoñczony zbiór instrukcji realizuj¹cy postawione przed nim zadanie. Kolejnoœæ instrukcj w zbiorze jest okreœlona.
Sposoby zapisu algorytmu:
* W punktach
* Opis s³owny
* Jêzyk programowania lub pseudokod
* Schemat blokowy

Zmienna - jest to pewien obszar pamiêci, s³ó¿¹cy do przechowywania danych, te dane mo¿na modyfikowaæ
Zmienna pozwala przechowywaæ tylko jedn¹ wartoœæ w danym momencie czasu

Deklaracja zmiennej - moment jej utworzenia
typ_zmiennej nazwa_zmiennej;
Typ zmiennej - mówi o wielkoœci obszaru w pamiêci i o rodzaju przechowywanych danych

short		liczby ca³kowite ze znakiem		2 bajty -> 16 bitów		<-32 768; 32 767>
int/long	liczby ca³kowite ze znakiem		4 bajty -> 32 bity		<-2 147 483 648; 2 147 483 647> od - 2 miliardów do 2 miliardów
long long	liczby ca³kowite ze znakiem		8 bajtów -> 64bity		<-9 223 372 036 854 775 808; 9 223 372 036 854 775 807> -9 trylionów do 9 trylionów

Je¿eli przed powy¿szymi typami danych  dodamy s³owo "unsigned" to
zakres jest od 0 do podwojonego zakresu górnego plus 1 (short->32 767*2 + 1)

float			liczby rzeczywiste ze znakiem 4 bajty
double			liczby rzeczywiste ze znakiem 8 bajtów
long double		liczby rzeczywiste ze znakiem 12 bajtów

Nazwa zmiennej jest to nazwa obszaru pamiêci. Poprzez tê nazwê odwo³ujemy siê do tego obszaru.
Wymagania kompilatora wzglêdem nazwy:
* u¿ycie tylko dozwolonych znaków - alfabet angielsk a-z oraz A-Z
* cyfry arabskie	0-9
* podkreœlenie (pod³oga)_	(nie trzeba u¿ywaæ wszystkiego)

- pierwszym znakiem nie mo¿e byæ cyfra
- nie mo¿e byæ s³owem kluczowym w danym jêzyku programowania
- musi byæ unikalny w danej widocznoœæi (dana widocznoœæ - zakres widocznoœci zmiennej)

Wymagania programistów:
- jeœli nazwa sk³ada siê z wielu wyrazów to zamiast spacji:
	* U¿ywamy znaku podkreœlenia first_number_from_user
	* stosujemy camel case, czyli piszemy wszystko razem a s³owa (zaczynamy od drugiego)
	* zaczynamy z du¿ej litery np.firstNumberFromUser
- nazwa zmiennej musi oddwaæ charakter przechowywanych danych, czyli mieæ znaczenie
- nazwy zmiennych po angielsku

Filtr na zdjêcia o ma³ym rozmiarze w np. 1kb lub 1MB. zdjêcia dodaje siê poprzez klikniêcie w projekt a nastêpnie Open folder in explorer dodajemy zdj,
*/
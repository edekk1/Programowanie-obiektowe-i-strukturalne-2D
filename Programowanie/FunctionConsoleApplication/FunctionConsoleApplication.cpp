#include <iostream>

/*
Funkcja - zbiór instrukcji. Definicja/deklaracja funkcji sk³ada siê z dwóch czêœci:
* nagówek - sposób u¿ycia funkcji
	- typ zwracany
	- nazwa (poprawny identyfikator)
	- parametrów w nawiasie (nieobowi¹zkowe)
* cia³o - zbiór instrukcji

typZwracany nazwaFuncji(parametry)
{
	//cia³o funkcji
}
*/

void showHello()
{
	std::cout << "Hello World\n";
}

void showHelloMaciek()
{
	std::cout << "Witaj Maciej\n";
}

void showHelloJan()
{
	std::cout << "Witaj Jan\n";
}

void showWelcome(std::string n)
{
	std::cout << "Witaj " << n << "\n";
}

void showWelcome(std::string n, int w)
{
	std::cout << "Witaj " << n << ". Wiek tej osoby to: " << w << " lat." << "\n";
}

void showWelcome(std::string n, int w, std::string a)
{
	showWelcome(n, w);
	std::cout << "Adres to: " << a << "\n";
}

void parameterTest(int& p) //przez referencje, jeœli by³oby przez wartoœæ to wartoœæ variable po wykonaniu funkcji wynosi³a by dalej 5
{
	std::cout << "Wartoœæ parametru: " << p << "\n";
	p++;
	std::cout << "Wartoœæ parametru: " << p << "\n";
}

int sum(int firstNumber, int secondNumber)
{
	int r;
	r = firstNumber + secondNumber;
	return r;
}

unsigned long long strong(int n)
{
	unsigned long long s = 1;
	for (int i = 1; i <= n; i++)
	{
		s = s * i;
	}
	return s;
}

//algorytm rekurencyjny
unsigned long long strongv2(int n)
{
	unsigned long long s = 1;
	if (n <= 1)
		s = 1;
	else
		s = n * strongv2(n - 1); 
	return s;
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	/*
	showHello();
	//jakiœ kod
	showHello();
	showHelloMaciek();
	showHelloJan();
	std::cout << "\n";
	std::string name;
	name = "Mackiek";
	showWelcome(name);
	name = "Jan";
	showWelcome(name);
	showWelcome("Anna");
	int age = 10;
	showWelcome("Damian", age, "ul.Krakowska 1");
	*/

	//kolejnoœæ parametrów, kolejnoœæ deklaracji w funkcji np. void showWelcomeAndAge(std::string n, int w) -> "dasd", 4
	//przeci¹¿enie funkcji - ta sama nazwa funkcji ró¿nica w parametrach
	//dodanie przestrzeni

	/*
		namespace nazwaPrzestrzeni
		{
			np.funkcja
		}
		odwo³anie sie do ptzestrzeni nazwaPrzestrzeni::funkcja();
		jeœli s¹ w sobie namespace to wtedy p1::p2::funkcja();
		p1 - przestrzeñ 1

		przekazanie do parametru przez wartoœæ lub referencje czyli odwo³anie aby u¿yæ referencji nale¿y u¿yæ typ& nazwa parametru
		referencja = przekazanie orygina³u 
		wartoœæ = kopia
		sta³ej nie przeka¿e przez referencje
		zwracanie przez parametr wyniku
	*/

	/* Zasady
		DRY - don't repeat yourself - nie powtarzaj siê
		KISS - Keept it simple, stupid - trzymaj prostotê g³upcze
		YAGNI - you aren't gonna need it - nie potrzebujesz tego
		SOLID
		S - single responsibility - pojedyñcza odpowiedzialnoœæ
	*/

	/*
	int variable = 5;
	std::cout << "Wartoœæ zmiennej przed funkcj¹: " << variable << "\n";
	parameterTest(variable);
	std::cout << "Wartoœæ zmiennej po funkcji: " << variable << "\n";

	int result;
	result = sum(15, 7) + 2;
	std::cout << "Wynik sumowania to : " << result << "\n";
	*/

	/*
	int silnia;
	std::cout << "Podaj z jakiej liczby chcesz uzyskaæ silnie.\n";
	std::cin >> silnia;
	std::cout << "Silnia z " << silnia << " wynosi: " << strongv2(silnia) << "\n";
	*/
}
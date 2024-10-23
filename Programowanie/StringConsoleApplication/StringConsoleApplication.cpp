
#include <iostream>

int main()
{
	// stary kod, poniewa¿ nazwa klasy i metody jest z du¿ej litery
	std::string text;
	text = "Ala ma kota";
	std::cout << "tekst na pocz¹tku: " << text << "\n";
	size_t len = text.length();
	std::cout << "D³ugoœæ: " << len << "\n";
}

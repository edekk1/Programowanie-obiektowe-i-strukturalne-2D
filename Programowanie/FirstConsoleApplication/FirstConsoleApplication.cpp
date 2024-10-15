// FirstConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "polish");
	std::cout << "Hello World!";
	std::cout << "Nazywam sie Dawid.\n";
	std::cout << 'X';
	std::cout << "\n";
	std::cout << '\n'; // Tylko dla jednego znaku lub znaku specjalnego np.'X', '\n'
	std::cout << 56 << "\n"; //Sta³a liczbowa ca³kowita 
	std::cout << 12.5 << "\n"; //Sta³a liczbowa rzeczywista
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//  1. Use the Solution Explorer window to add/manage files	
//  2. Use the Team Explorer window to connect to source control
//  3. Use the Output window to see build output and other messages
//  4. Use the Error List window to view errors
//  5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//  6. In the future, to open this project again, go to File > Open > Project and select the .sln file//To jest te¿ komentarz
// To jest te¿ komentarz.

/*
Formatowanie kodu za pomoc¹ skrótu ctrl(trzymamy) + k(tylko klikn¹æ) + D(tylko klikn¹æ)
ctrl + D - duplikacja, powielenie linijki kodu
pomiêdzy poeratorami spacje np. std::cout_<<_"Hello world"; zaznaczenie spacji
ctrl + k + c - zakomentowanie linijki kodu
ctr + k + u - odkomentowanie kodu
*/


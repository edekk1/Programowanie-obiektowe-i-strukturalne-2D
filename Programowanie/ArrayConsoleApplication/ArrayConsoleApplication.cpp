#include <iostream>

//Napisz program, który wczyta 5 liczb a nastêpnie wyœwietli je w odwrotnej kolejnoœci.
void task1()
{
    const unsigned int ARRAY_NUMBER_SIZE = 5;
   
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        std::cout << "Podaj " << (i + 1) << " liczbê\n";
        std::cin >> numbers[i];
    }

    for (int i = ARRAY_NUMBER_SIZE - 1; i >= 0; i--)
    {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}

//Program, który wype³ni tablice (100 elementow¹) kolejnymi liczbami od 1 do 99, a nastêpnie obliczy sumê oraz œredni¹ liczb parzystych.
void task2()
{
    const unsigned short ARRAY_NUMBER_SIZE = 100;
    
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        numbers[i] = i;
        std::cout << numbers[i] << " ,";
    }

    std::cout << "\n";
    
    int sum = 0;
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            sum = sum + numbers[i];
        }
        
    }
    
    std::cout << "\n";
    std::cout << "Suma liczb parzystych tablicy wynosi: " << sum << "\n";
   
    double arithmeticMeanOfEvenNumbers = sum * 1.0/ ARRAY_NUMBER_SIZE;

    std::cout << "Œrednia arytmetyczna tych liczb wynosi: " << arithmeticMeanOfEvenNumbers;
}

//Napisz program który przyjmie od u¿ytkownika listê ocen z pewnego przedmiotu i obliczy ich œredni¹ arytmetyczn¹.
/*Funkcje programu :

*Poproœ u¿ytkownika o wprowadzenie ka¿dej oceny.
*Zapisz oceny w tablicy.
*Oblicz œredni¹ arytmetyczn¹ ocen.
*Wyœwietl œredni¹ ocen na ekranie.
*/

void task3()
{
    std::cout << "Podaj swoje oceny z jednego dowolnego przedmiotu szkolnego, mo¿esz podaæ maksymalnie 10 ocen\n";
    std::cout << "Napisz z jakiego przedmiotu obliczasz œredni¹. Napisz to w sposób np. historii, biologii, chemii, angielskiego itd.\n";
    std::string subjectFromUser;
    std::cin >> subjectFromUser;

    const unsigned int ARRAY_NUMBERS_SIZE = 10;
    int grades[ARRAY_NUMBERS_SIZE];
    int sum = 0;

    for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++) {
        bool grade = false;
        while (grade == false) 
        {
            std::cout << "Podaj swoj¹ " << (i + 1) << " ocenê: ";
            std::cin >> grades[i];
            if (grades[i] >= 1 && grades[i] <= 6) 
            {
                grade = true;
                std::cout << "\n";
                sum = sum + grades[i];
            }
            else 
            {
                std::cout << "Podana ocena jest w z³ej skali. Podaj ocenê z zakresu od 1 do 6.\n";
            }
        }
    }

    double arithmeticAverage = sum * 1.0 / ARRAY_NUMBERS_SIZE;
    std::cout << "Twoja œrednia ocen z " + subjectFromUser <<  " wynosi: " << arithmeticAverage << "\n";
}

//Program obliczaj¹cy œredni¹ arytmetyczn¹ elementów w tablicy liczb ca³kowitych.
void task4()
{
    const unsigned int ARRAY_NUMBER_SIZE = 5;

    srand(time(NULL));

    std::cout << "Liczby w kolekcji: \n";
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        numbers[i] = rand() % 11;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n\n";

    int sum = numbers[0]; //przyspieszenie poprzez przypisanie sumie indeksu 0, co skraca pêtle. W poprzednch programach nie zastosowane
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        sum = sum + numbers[i];
    }

    double arithmeticAverage = sum * 1.0 / ARRAY_NUMBER_SIZE;

    std::cout << "Œrednia arytmetyczna tych elementów tablicy wynosi: " << arithmeticAverage << "\n";
}

//Program szukaj¹cy maksimum i minimum z tablicy wype³nionej liczbami pseudolosowymi;
void task5()
{
    const unsigned int ARRAY_NUMBER_SIZE = 100;

    srand(time(NULL));

    std::cout << "Liczby w kolekcji: \n";
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        numbers[i] = rand() % 101;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n\n";

    int max = numbers[0];
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        if (numbers[i] > max)
            max = numbers[i];
    }
    std::cout << "Maksymalna liczba pod wzglêdem wielkoœci w tablicy wynosi: " << max << "\n";

    //Algorytm uniwersalny, min i max przypisujemy index 0 z tablicy, poniewa¿ mamy pewnoœæ ¿e bêdzie indeks 0 oraz przestawiamy 
    //"i" w pêtli na 1 bo nie ma sensu porównywaæ tego samego indeksu.

    int min = numbers[0];
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
    }
    std::cout << "Najmniejsza liczba pod wzglêdem wielkoœci w tablicy wynosi: " << min << "\n";
}

//Napisz program który wczyta numer dnia tygodnia, a nastêpnie wyœwietli nazwê tego dnia lub komunikat b³êdu.
void task6()
{
    int numberFromUser;
    std::cout << "Podaj numer dnia tygodnia: \n";
    std::cin >> numberFromUser;

    std::string nameOfDay[7];
     nameOfDay[0] = "Poniedzia³ek";
     nameOfDay[1] = "Wtorek";
     nameOfDay[2] = "Œroda";
     nameOfDay[3] = "Czwartek";
     nameOfDay[4] = "Pi¹tek";
     nameOfDay[5] = "Sobota";
     nameOfDay[6] = "Niedziela";
    
    if (numberFromUser >= 0 && numberFromUser <= 6)
    {
        std::cout << "Nazwa dnia to: " << nameOfDay[numberFromUser] << " \n";
    }
    else 
    {
        std::cout << "Nie ma takiego dnia \n";
    }
}

//Algorytm sortuj¹cy (wyboru).
void task7()
{
    const unsigned int ARRAY_NUMBER_SIZE = 10;

    srand(time(NULL));

    std::cout << "Liczby w kolekcji: \n";
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        numbers[i] = rand() % 100;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n\n";

    for (int i = 0; i < ARRAY_NUMBER_SIZE - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < ARRAY_NUMBER_SIZE; j++)
        {
            if (numbers[j] < numbers[minIndex])
                minIndex = j;
        }
        int tmp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = tmp;
    }

    std::cout << "Po sortowaniu:\n";
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        std::cout << numbers[i] << ", ";
    }
}

//Algorytm sortuj¹cy (b¹belkowy).
void task8()
{
    const unsigned int ARRAY_NUMBER_SIZE = 10;

    srand(time(NULL));

    std::cout << "Liczby w kolekcji: \n";
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        numbers[i] = rand() % 100;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n\n";

    for (int i = 0; i < ARRAY_NUMBER_SIZE - 1; i++)
    {
        for (int j = 0; j < ARRAY_NUMBER_SIZE - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int tmp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tmp;
            }
        }
    }

    std::cout << "Po sortowaniu:\n";
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        std::cout << numbers[i] << ", ";
    }
}

//Sito Eratostenesa
void task9()
{
    const unsigned int ARRAY_NUMBER_SIZE = 50;
    bool sieve[ARRAY_NUMBER_SIZE];

    for (int i = 2; i < ARRAY_NUMBER_SIZE; i++)
    {
        sieve[i] = true;
    }

    for (int i = 2; i < ARRAY_NUMBER_SIZE; i++)
    {
        if (sieve[i] == true)
        {
            for (int j = i + i; j < ARRAY_NUMBER_SIZE; j = j + i)
            {
                sieve[j] = false;
            }
        }
    }

    std::cout << "Liczby pierwsze:\n";
    for (int i = 2; i < ARRAY_NUMBER_SIZE; i++)
    {
        if (sieve[i] == true)
            std::cout << i << ",";
    }
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task9();
}
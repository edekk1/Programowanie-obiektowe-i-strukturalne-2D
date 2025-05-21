#include <iostream>
#include <vector>
#include <fstream>

//Zadanie 1
int numberShort(int number)
{
    if (number > 0)
    {
        int numShort = 0;
        int multiplier = 1;

        while (number > 0)
        {
            int digit = number % 10;
            if (digit % 2 == 1)
            {
                numShort = digit * multiplier + numShort;
                multiplier *= 10;
            }
            number /= 10;
        }

        return numShort;
    }
}

int greatestCommonDivisor(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    setlocale(LC_CTYPE, "Polish");
    std::ifstream file("skrot2_przyklad.txt");
    std::vector<int> numbers;
    int number;

    while (file >> number)
    {
        numbers.push_back(number);
    }

    //Zadanie 2
    int counter = 0;
    int highest = 0;
    int max = 0;

    for (int num : numbers)
    {
        if (numberShort(num) == 0)
        {
            counter += 1;
            if (num > max)
            {
                max = num;
                highest = num;
            }
        }
    }
    std::cout << "Zadanie 2: " << counter << ", " << highest << "\n";

    //Zadanie 3
    std::cout << "Zadanie 3: ";
    for (int num : numbers)
    {
        int numShort = numberShort(num);
        if (greatestCommonDivisor(num, numShort) == 7)
        {
            std::cout << num << ", ";
        }
    }
}

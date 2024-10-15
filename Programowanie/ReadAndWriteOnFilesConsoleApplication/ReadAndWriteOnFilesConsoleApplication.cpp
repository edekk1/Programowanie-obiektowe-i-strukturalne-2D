#include <iostream>
#include <fstream>

void task1()
{
    std::string name;
    int age;

    std::cout << "Podaj imi�:\n";
    std::cin >> name;

    std::cout << "Podaj sw�j wiek:\n";
    std::cin >> age;

    std::ofstream writeInFile;
    writeInFile.open("c:\\dane.txt", std::ios::app);

    if (writeInFile.is_open() == true)
    {
        writeInFile << name;
        writeInFile << "\n";
        writeInFile.flush();
        writeInFile << age << "\n";

        writeInFile.close();
    }
    else
        std::cout << "B��d otwarcia pliku\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}

/*
Dane s� buforowane, kiedy bufor si� przepe�ni wysy�a dane do pliku.
Metoda flush wymusza opr�nienie bufora (bufor sam sie opr�ni bez wywo�ywania tej metody).
*/



#include <iostream>
#include <fstream>

void task1()
{
    std::string name;
    int age;

    std::cout << "Podaj imiê:\n";
    std::cin >> name;

    std::cout << "Podaj swój wiek:\n";
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
        std::cout << "B³¹d otwarcia pliku\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}

/*
Dane s¹ buforowane, kiedy bufor siê przepe³ni wysy³a dane do pliku.
Metoda flush wymusza opró¿nienie bufora (bufor sam sie opró¿ni bez wywo³ywania tej metody).
*/



Console.WriteLine("Hello, World!");
Console.WriteLine("Hello, World!");
string name = "Jan";
string surname = "Kowalski";
Console.WriteLine("Witaj " + name + " " + surname + " tutaj!");
Console.WriteLine("Witaj {0} {1} tutaj!", name, surname);
Console.WriteLine($"Witaj {name} {surname} tutaj");
//znak $ powoduje to że możemy używać {} do wstawiania zmiennych
Console.WriteLine(@"Prękość to km\h");
//znak @ powoduje że nie trzeba używać znaków specjalnych

/*
int firstNumber = 5;
ref int secondNumber = ref firstNumber;
secondNumber = 6;

Aby w takim przypadku zmienić wartość firstNumber, trzeba użyć słowa kluczowego ref
przy deklaracji secondNumber i przypisaniem wartości.
*/

int firstNumber = 5;
int secondNumber = firstNumber;
secondNumber = 6;
Console.WriteLine($"Wartość firstNumber: {firstNumber}");
Console.WriteLine($"Wartość secondNumber: {secondNumber}");
/*
Domyślnie w C# przekazywanie parametrów do metod odbywa się przez wartość.
Można jednak wymusić przekazywanie przez referencję używając słowa kluczowego ref.
*/

void ParameterTest_v1(ref int number)
{
    Console.WriteLine($"Wartość number przed: {number}");
    number++;
    Console.WriteLine($"Wartość number po: {number}");
}

firstNumber = 99;
Console.WriteLine($"Wartość firstNumber: {firstNumber}");
ParameterTest_v1(ref firstNumber);
Console.WriteLine($"Wartość firstNumber po parameter test: {firstNumber}");

void ParameterTest_v2(out int number)
{
    number = 20;
    Console.WriteLine($"Wartość number po: {number}");
}

int thirdNumber;
ParameterTest_v2(out thirdNumber);
Console.WriteLine($"Wartość firstNumber po parameter test: {thirdNumber}");

/*
Out - podobnie jak ref - pozwala na przekazywanie przez referencję
ale nie musi być inicjalizowana przed przekazaniem do metody.
*/

string strNumber = "123";
int number = int.Parse(strNumber);

if (int.TryParse(strNumber, out int result))
{
    Console.WriteLine($"Parsowanie się udało. Wartość: {result}");
}
else
{
    Console.WriteLine("Parsowanie się nie udało.");
}
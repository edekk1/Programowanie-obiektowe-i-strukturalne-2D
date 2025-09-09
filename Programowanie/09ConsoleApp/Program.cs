using System;

class Program
{
    static void Main()
    {
        while (true)
        {
            Console.WriteLine("=== MENU LICZBOWE ===");
            Console.WriteLine("1) Sprawdz, czy liczba jest pierwsza");
            Console.WriteLine("2) Wypisz liczby pierwsze do N");
            Console.WriteLine("3) NWD (algorytm Euklidesa)");
            Console.WriteLine("0) Wyjscie");
            Console.Write("Wybor: ");

            string choice = Console.ReadLine();
            Console.WriteLine();

            if (choice == "0") break;

            switch (choice)
            {
                case "1":
                    {
                        int n = ReadInt("Podaj liczbe calkowita >= 0: ");
                        if (IsPrime(n))
                            Console.WriteLine("TAK, liczba pierwsza\n");
                        else
                            Console.WriteLine("NIE, nie jest pierwsza\n");
                        break;
                    }
                case "2":
                    {
                        int n = ReadInt("Podaj N (N >= 2): ");
                        if (n < 2)
                        {
                            Console.WriteLine("Brak liczb pierwszych.\n");
                            break;
                        }

                        Console.WriteLine("Liczby pierwsze do N:");
                        for (int i = 2; i <= n; i++)
                            if (IsPrime(i)) Console.Write(i + " ");
                        Console.WriteLine("\n");
                        break;
                    }
                case "3":
                    {
                        int a = ReadInt("Podaj a: ");
                        int b = ReadInt("Podaj b: ");
                        Console.WriteLine($"NWD({a}, {b}) = {Gcd(a, b)}\n");
                        break;
                    }
                default:
                    Console.WriteLine("Nieznana opcja.\n");
                    break;
            }
        }
    }

    static int ReadInt(string prompt)
    {
        while (true)
        {
            Console.Write(prompt);
            string s = Console.ReadLine();
            int x;
            if (int.TryParse(s, out x)) return x;
            Console.WriteLine("Niepoprawna liczba, sprobuj ponownie.");
        }
    }

    static bool IsPrime(int n)
    {
        if (n < 2) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;

        int limit = (int)Math.Sqrt(n);
        for (int d = 3; d <= limit; d += 2)
            if (n % d == 0) return false;
        return true;
    }

    static int Gcd(int a, int b)
    {
        a = Math.Abs(a);
        b = Math.Abs(b);

        while (b != 0)
        {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }
}

namespace PracticalTasksConsoleApp.Styczeń2023_1
{
    internal class task2
    {
        public void Task()
        {
            Notatka notatkaPierwsza = new Notatka("Zakupy", "Kupić mleko, chleb i jajka.");
            Notatka notatkaDruga = new Notatka("Praca", "Zakończyć raport do piątku.");

            Console.WriteLine("Pierwsza notatka:");
            notatkaPierwsza.WyswietlNotatke();
            notatkaPierwsza.Diagnostyczna();

            Console.WriteLine("\nDruga notatka:");
            notatkaDruga.WyswietlNotatke();
            notatkaDruga.Diagnostyczna();
        }
    }
}

namespace AboutObjectConsoleApp
{
    internal class Point
    {
        private int x;
        private int y;
        /*
        Krótsza wersja:
        private int Y { get; set; }
        Properties, bo z dużej litery
        */

        /*
        Properties - łączy pole i metode w jedno, odwołujemy się jak do pola ale 
        działa jak metoda, piszemy z dużej litery
        */

        public int X
        {
            set
            {
                x = value;
            }

            get
            {
                return x;
            }
        }

        public Point()
        {
            x = 0;
            y = 0;
        }

        public Point(int x, int y)
        {
            this.x = x;
            this.y = y;
        }

        public void SetX(int x)
        {
            this.x = x;
        }

        public void SetY(int y)
        {
            this.y = y;
        }

        public int GetX()
        {
            return x;
        }

        public int GetY()
        {
            return y;
        }

        public void ShowInfo()
        {
            Console.WriteLine($"{x}, {y}");
        }
    }
}
namespace AboutObjectConsoleApp
{
    // Point3D dziedziczy po Point, a Point dziedziczy po Object
    internal class Point3D : Point
    {
        protected int z;

        //Jeśli użytkownik nie poda wartości to domyślnie będą wynosić 0
        public Point3D(int x = 0, int y = 0, int z = 0) : base(x, y)
        {
            this.z = z;
        }

        /*
        Wskazuje na konkretny konstruktor
        public Point3D(int x = 0, int y = 0, int z = 0) : this() { } 
        { 
        
        }
        */

        //new informuje że piszemy nową wersję metody ShowInfo
        public new void ShowInfo()
        {
            Console.WriteLine($"Point3D: x = {x}, y = {y}, z = {z}");
            //Wywołuje metode ShowInfo z klasy bazowej base.ShowInfo();
        }
    }
}
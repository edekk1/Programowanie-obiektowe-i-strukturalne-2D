using AboutObjectConsoleApp;

Point firstPoint = new Point();
firstPoint.ShowInfo();

firstPoint.SetX(10);
firstPoint.SetY(10);

firstPoint.ShowInfo();

//Można usunąć w drugiej części nazwę klasy
Point secondPoint = new(2, 4);
secondPoint.ShowInfo();

//int value = secondPoint.GetX();
//value = secondPoint.x;
int value = secondPoint.X;
Console.WriteLine(value);
secondPoint.X = 20;
secondPoint.ShowInfo();
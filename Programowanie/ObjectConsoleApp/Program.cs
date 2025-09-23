
using ObjectConsoleApp;

pointStruct pointStruct;
pointStruct.x = 5;
pointStruct.y = 10;

Console.WriteLine($"Punkt ma: x = {pointStruct.x}, y = {pointStruct.y}");

pointStruct secondPointStruct = pointStruct;
secondPointStruct.y = 20;

Console.WriteLine($"Punkt ma: x = {pointStruct.x}, y = {pointStruct.y}");
Console.WriteLine($"Drugi punkt ma: x = {secondPointStruct.x}, y = {secondPointStruct.y}");

void ParameterTestStruct_v1(pointStruct point)
{
    Console.WriteLine($"W ParameterTeststruct_v1 ma: x = {point.x}, y = {point.y}");
    point.x = 99;
    Console.WriteLine($"W ParameterTeststruct_v1 ma: x = {point.x}, y = {point.y}");
}

ParameterTestStruct_v1(pointStruct);
Console.WriteLine($"Punkt po wywołaniu ma: x = {pointStruct.x}, y = {pointStruct.y}");

Console.WriteLine("---------------------------");

void ParameterTestStruct_v2(ref pointStruct point)
{
    Console.WriteLine($"W ParameterTeststruct_v2 ma: x = {point.x}, y = {point.y}");
    point.x = 99;
    Console.WriteLine($"W ParameterTeststruct_v2 ma: x = {point.x}, y = {point.y}");
}

ParameterTestStruct_v2(ref pointStruct);
Console.WriteLine($"Punkt po wywołaniu ma: x = {pointStruct.x}, y = {pointStruct.y}");

pointClass firstPointClass = new pointClass();
firstPointClass.x = 5;
firstPointClass.y = 10;

Console.WriteLine($"FirstPointClass ma: x = {firstPointClass.x}, y = {firstPointClass.y}");
pointClass secondPointClass = firstPointClass;
secondPointClass.x = 20;

Console.WriteLine($"FirstPointClass ma: x = {firstPointClass.x}, y = {firstPointClass.y}");
Console.WriteLine($"SecondPointClass ma: x = {secondPointClass.x}, y = {secondPointClass.y}");

void ParatertTestClass_v1(pointClass pc)
{
    Console.WriteLine($"W ParatertTestClass_v1 punkt ma ({pc.x}, {pc.y}) ");
    pc.x = 99;
    Console.WriteLine($"W ParatertTestClass_v1 punkt ma ({pc.x}, {pc.y}) ");
}

ParatertTestClass_v1(firstPointClass);
Console.WriteLine($"firstPointClass ({firstPointClass.x}, {firstPointClass.y}) ");

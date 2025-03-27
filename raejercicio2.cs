using System;

class Program
{
    static void Main(string[] args)
    {
        double baseTriangulo = 7.5;
        double alturaTriangulo = 10.0;

        double area = (baseTriangulo * alturaTriangulo) / 2;

        Console.WriteLine("El área del triángulo es: " + area + " cm²");
    }
}
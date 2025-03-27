using System;

class Program
{
    static void Main(string[] args)
    {
        double gradosCelsius = 30;

        // Conversión de Celsius a Fahrenheit
        double temperatura = (gradosCelsius * 1.8) + 32;

        // Mostrar el resultado
        Console.WriteLine("El resultado de grados Fahrenheit es de: " + temperatura);
    }
}
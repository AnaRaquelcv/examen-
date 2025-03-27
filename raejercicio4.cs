using System;

class Program
{
    static void Main(string[] args)
    {
        int dividendo = 23;
        int divisor = 6;

        int resto = dividendo % divisor;

        Console.WriteLine("El resto de dividir " + dividendo + " entre " + divisor + " es: " + resto);
    }
}
using System;

class Program
{
    static void Main(string[] args)
    {
        double a = 1;
        double b = -5;
        double c = 6;

        double discriminante = b * b - 4 * a * c;

        if (discriminante > 0)
        {
 
            double raiz1 = (-b + Math.Sqrt(discriminante)) / (2 * a);
            double raiz2 = (-b - Math.Sqrt(discriminante)) / (2 * a);
            Console.WriteLine("Las raíces son: x₁ = " + raiz1 + " y x₂ = " + raiz2);
        }
        else if (discriminante == 0)
        {

            double raiz = -b / (2 * a);
            Console.WriteLine("La raíz doble es: x = " + raiz);
        }
        else
        {

            Console.WriteLine("No hay raíces reales.");
        }
    }
}
#include <iostream>

int main() {

    int num1, num2;

    std::cout << "Ingrese el primer número entero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número entero: ";
    std::cin >> num2;

 
    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;

    double division = (num2 != 0) ? static_cast<double>(num1) / num2 : 0;


    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Resta: " << resta << std::endl;
    std::cout << "Multiplicación: " << multiplicacion << std::endl;
    if (num2 != 0) {
        std::cout << "División: " << division << std::endl;
    } else {
        std::cout << "División: No se puede dividir por cero." << std::endl;
    }

    return 0;
}
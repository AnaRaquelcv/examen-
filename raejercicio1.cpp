#include <iostream>

int main() {
    int entero = 42;
    float decimalFloat = 3.14f;
    double decimalDouble = 3.141592653589793;
    char caracter = 'A';
    bool booleano = true;

    std::cout << "Valor de entero: " << entero << ", Tamaño: " << sizeof(entero) << " bytes" << std::endl;
    std::cout << "Valor de decimalFloat: " << decimalFloat << ", Tamaño: " << sizeof(decimalFloat) << " bytes" << std::endl;
    std::cout << "Valor de decimalDouble: " << decimalDouble << ", Tamaño: " << sizeof(decimalDouble) << " bytes" << std::endl;
    std::cout << "Valor de caracter: " << caracter << ", Tamaño: " << sizeof(caracter) << " bytes" << std::endl;
    std::cout << "Valor de booleano: " << booleano << ", Tamaño: " << sizeof(booleano) << " bytes" << std::endl;

    return 0;
}
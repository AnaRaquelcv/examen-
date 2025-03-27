#include <iostream>
#include <limits> 
using namespace std;

int main() {
    int numero;
    int suma = 0;
    int i = 1;

    cout << "Ingrese un número entero positivo: ";
    cin >> numero;


    if (cin.fail()) {
        cout << "Entrada inválida. Debe ingresar un número entero." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1; 
    }

    if (numero <= 0) {
        cout << "Por favor, ingrese un número entero positivo." << endl;
        return 1; 
    }

    while (i <= numero) {
        suma += i;
        i++;
    }

    cout << "La suma de los números enteros desde 1 hasta " << numero << " es: " << suma << endl;

    return 0;
}
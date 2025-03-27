#include <iostream>
#include <string> 

using namespace std;

int main() {
    string nombre;

    cout << "Por favor, ingrese su nombre: ";
    getline(cin, nombre); 

    cout << "Hola, " << nombre << "! ¡Bienvenido!" << endl;

    return 0;
}
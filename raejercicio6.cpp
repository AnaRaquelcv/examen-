#include <iostream>
#include <limits> 

using namespace std;

int main() {
    int numeros[5]; 

    cout << "Ingrese 5 números enteros:" << endl;

   
    for (int i = 0; i < 5; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];

  
        if (cin.fail()) {
            cout << "Entrada inválida. Debe ingresar un número entero." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            i--;
            continue;  
        }
    }

    cout << "Los números ingresados son:" << endl;

    for (int i = 0; i < 5; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl; 

    return 0;
}
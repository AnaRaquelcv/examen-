#include <iostream>

using namespace std;

int main() {
    int numeros[10]; 

    cout << "Ingresa 10 números:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i]; 
    }

    cout << "Números pares en el array:" << endl;
    for (int i = 0; i < 10; ++i) {
        if (numeros[i] % 2 == 0) { 
            cout << numeros[i] << " "; 
        }
    }
    cout << endl; 

    return 0;
}
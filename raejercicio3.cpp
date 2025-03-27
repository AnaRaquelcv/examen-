#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Introduce tu edad: ";
    cin >> a;

    if (a >= 18) {  
        cout << "Es mayor de edad." << endl;
    } else {
        cout << "Es menor de edad." << endl;
    }

    return 0;
}
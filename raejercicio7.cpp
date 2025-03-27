#include <iostream>

using namespace std;

int mayor(int num1, int num2) {
    return (num1 > num2) ? num1 : num2; 
}

int main() {
   
    cout << "El mayor entre 5 y 10 es: " << mayor(5, 10) << endl;
    cout << "El mayor entre 20 y 15 es: " << mayor(20, 15) << endl;
    cout << "El mayor entre -3 y -7 es: " << mayor(-3, -7) << endl;
    cout << "El mayor entre 0 y 0 es: " << mayor(0, 0) << endl;

    return 0;
}
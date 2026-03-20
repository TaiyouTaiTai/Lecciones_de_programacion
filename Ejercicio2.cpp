#include <iostream>
using namespace std;


int main() {
    float a, b, c, d, resultado = 0;
    cout << "Ingresa el valor de a: "; cin >> a;
    cout << "Ingresa el valor de b: "; cin >> b;
    cout << "Ingresa el valor de c: "; cin >> c;
    cout << "Ingresa el valor de d: "; cin >> d;
    resultado = (a + b) / (c + d) ;
    cout << "\nEl resultado es: " << resultado << endl;

    return 0;
}
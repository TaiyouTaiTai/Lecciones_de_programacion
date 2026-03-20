#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, resultado = 0.0;
    cout << "\nIngresa el valor a: "; cin >> a;
    cout << "\nIngresa el valor b: "; cin >> b;
    cout << "\nIngresa el valor c: "; cin >> c;
    cout << "\nIngresa el valor d: "; cin >> d;

    resultado =(a + (b / (c - d)));

    cout.precision(2);
    cout << "El resultado es: " << resultado << endl;
    return 0;
}
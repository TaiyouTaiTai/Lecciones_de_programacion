#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, e, f, resultado = 0;
    cout << "\nIngresa el valor de a: "; cin >> a;
    cout << "\nIngresa el valor de b: "; cin >> b;
    cout << "\nIngresa el valor de c: "; cin >> c;
    cout << "\nIngresa el valor de d: "; cin >> d;
    cout << "\nIngresa el valor de e: "; cin >> e;
    cout << "\nIngresa el valor de f: "; cin >> f;
    resultado = (a + (b / c)) / (d + (e / f)) ;

    cout.precision(2);
    cout << "\nEl resultado es: " << resultado << endl;
    return 0;
}
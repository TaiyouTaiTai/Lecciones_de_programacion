#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a, b, c, resultado = 0;
    cout << "Ingrese el valor de a: "; cin >> a;
    cout << "Ingrese el valor de b: "; cin >> b;
    cout << "Ingrese el valor de c: "; cin >> c;

    resultado = (-b + sqrt(pow(b,2) -4*a*c))/(2 * a);
    cout << "\nEl resultado es: " << resultado << endl;
    resultado = (-b - sqrt(pow(b, 2)-4*a*c)) / (2 * a);

    /*
    resultado1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    resultado2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    */
    cout << "\nEl resultado es: " << resultado << endl;
    return 0;
}

//10 Lecciones y 6 ejercicios, 17 de marzo del 2026
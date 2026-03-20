#include <iostream>
using namespace std;


int main() {
    float practica, teorica, participacion, notaFinal = 0.0;
    cout << "\nIngresa el valor de practica: "; cin >> practica;
    cout << "\nIngresa el valor de teorica: "; cin >> teorica;
    cout << "\nIngresa el valor de participacion: "; cin >> participacion;

    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10;

    notaFinal = practica + teorica + participacion;

    cout << "\nLa nota final es: " << notaFinal << endl;

    return 0;
}
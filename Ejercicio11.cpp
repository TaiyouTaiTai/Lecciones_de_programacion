#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int numeroCubo, numeroComparable, opc, resultado = 0;
    cout << "\t-+-+-+ Calculadora Experimental -+-+-+" << endl;
    cout << "1. La potencia al cubo de un número." << endl;
    cout << "2. Número par o impar" << endl;
    cout << "3. Salir." << endl;
    cout << "Ingrese una opcion: "; cin >> opc;

    switch (opc) {
        case 1:
            cout << "\nIngrese el numero: "; cin >> numeroCubo;
            resultado = pow(numeroCubo, 3);
            cout << "El resultado es: " << resultado << endl;
            break;
        case 2:
            cout << "\nIngrese el numero a comparar: "; cin >> numeroComparable;
            if (numeroComparable % 2 != 0) {
                cout << "El numero: " << numeroComparable << " es impar" << endl;
            }else if (numeroComparable == 0) {
                cout << "El numero es 0."<< endl;
            }else {
                cout << "El numero: " << numeroComparable << " es par" << endl;
            }
            break;
        case 3:
            cout << "Saliendo del programa.... ";
            break;

        default: cout << "Opcion no valida";
    }
    return 0;
}
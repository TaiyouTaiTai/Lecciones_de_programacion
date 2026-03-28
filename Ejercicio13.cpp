#include <iostream>
using namespace std;


int main() {
    int numero1, numero2;
    int resultado = 0;
    cout << "Ingrese la base: "; cin >> numero1;
    cout << "\nIngrese el exponente: "; cin >> numero2;

    if (numero2 == 0) {
        resultado = 1;
    }else {
        resultado = numero1;
    }
    for (int i = 2; i <= numero2; i++) {
            resultado = resultado * numero1;

    }

    cout << "El resultado es: " << resultado << endl;

    return 0;
}
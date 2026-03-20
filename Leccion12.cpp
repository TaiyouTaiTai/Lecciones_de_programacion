//Expresion switch
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero(entre 1 - 5): "; cin >> numero;
    switch (numero) {
        case 1: cout << "\nNumero 1" << endl; break;
        case 2: cout << "\nNumero 2" << endl; break;
        case 3: cout << "\nNumero 3" << endl; break;
        case 4: cout << "\nNumero 4" << endl; break;
        case 5: cout << "\nNumero 5" << endl; break;
        default: cout << "\nHas ingresado un numero que esta fuera del rango" << endl; break;
    }

    return 0;
}
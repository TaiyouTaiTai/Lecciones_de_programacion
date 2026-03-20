//Crear un sistema que capte el preción de un
//producto y saque el iva.
#include <iostream>
using namespace std;

int main() {
    float precio;
    cout << "Digite el precio del producto: "; cin >> precio;
    float iva = precio * 0.12;
    cout << "\nEl iva del producto es: " << iva << endl;

    return 0;
}
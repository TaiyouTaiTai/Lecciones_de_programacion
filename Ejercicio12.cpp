#include <iostream>
using namespace std;

int main() {
    int numero, contador = 0;
    while (numero != 0) {
        cout << "Ingrese un numero: "; cin >> numero;
        cout << "Numero ingresador: " << numero << endl;
        contador++;
    }
    cout << "La cantidad de numeros mayores a 0, es: " << contador << endl;


    return 0;
}
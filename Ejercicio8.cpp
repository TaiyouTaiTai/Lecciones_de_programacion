#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero: "; cin >> numero;
    if (numero == 0) {
        cout << "\nEl numero es 0" << endl;
    }else if (numero < 0) {
        cout << "\nEl numero es negativo" << endl;
    }else {
        cout << "\nEl numero es positivo" << endl;
    }
    return 0;
}
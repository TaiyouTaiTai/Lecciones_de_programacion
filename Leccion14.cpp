#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite un numero: "; cin >> numero;

    if (numero == 0) {
        cout << "Numero es 0";
    }else if (numero % 2 != 0) {
        cout << "El numero es impar: " << numero;
    }else
        cout << "El numero es par: " << numero;

    return 0;
}
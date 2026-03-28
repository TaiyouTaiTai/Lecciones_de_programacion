#include <iostream>
using namespace std;

int main() {
    int suma = 0, elevacion = 0, n;

    cout << "Ingrese un numero entero: "; cin >> n;
    for (int i = 1; i <= n; i++) {
        elevacion = pow(2, n);
        suma += elevacion;

    }
    cout << "El resultado es: " << suma << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int suma = 0, n;

    cout << "Ingrese un numero entero: "; cin >> n;
    for (int i = 1; i <= n; i +=2) {
        suma += i - (i + 1);

    }
    cout << "El resultado es: " << suma << endl;
    return 0;
}
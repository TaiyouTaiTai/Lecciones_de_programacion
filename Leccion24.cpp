#include <iostream>
using namespace std;

int main() {

    int n, resultado = 0, impar = 1;

    cout << "Ingrese n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        resultado = resultado + impar;
        impar = impar + 2;
    }

    cout << "Resultado: " << resultado;

    return 0;
}
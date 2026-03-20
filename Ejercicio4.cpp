#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, nota4, suma = 0.0 , promedio = 0.0;
    cout << "\nIngresa el valor de nota 1: "; cin >> nota1;
    cout << "\nIngresa el valor de nota 2: "; cin >> nota2;
    cout << "\nIngresa el valor de nota 3: "; cin >> nota3;
    cout << "\nIngresa el valor de nota 4: "; cin >> nota4;

    suma = nota1 + nota2 + nota3 + nota4; promedio = suma / 4;

    cout << "El promedio final es: " << promedio << endl;
    return 0;
}
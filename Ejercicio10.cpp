#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;
    cout << "Digite su numero: "; cin >> num1 >> num2 >> num3;
    cout << "\nDigite el numero a comparar: "; cin >> num4;

    if (num4 == num1 || num4 == num2 || num4 == num3) {
        cout << "El numero coincide con un numero anterior." << endl;
    }else {
        cout << "El numero no tiene coincidencias." << endl;
    }

    return 0;
}
//Arrays

#include <iostream>
using namespace std;


int main () {
    int numero, arrays[10];
    for (int i = 0; i < 10; i++) {
        cout << "Ingresa el numero " << "["<<i<<"]: ";  cin >> numero;
        arrays[i] = numero;
    }

    for (int i = 0; i < 10; i++) {
        cout << arrays[i] << " : ";
    }

    return 0;
}
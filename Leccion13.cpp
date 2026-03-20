//Determinar el mayor de 2 numeros
#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;
    cout<<"Digite 2 numeros: ";
    cin >> numero1 >> numero2;

    if (numero1>numero2) {
        cout<<"El primer numero es mayor al segundo: "<< numero1 << endl;
    }else if (numero1 == numero2) {
        cout << "Los dos numeros son iguales" << endl;
    }else {
        cout << "El numero mayor es: " << numero2;
    }

    return 0;
}
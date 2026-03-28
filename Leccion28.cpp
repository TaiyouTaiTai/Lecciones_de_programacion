#include <iostream>
#include <time.h>
using namespace std;


int main() {
    int numero, numeroRandom, contador = 0;
    srand(time(NULL)); //Investigar porque
    numeroRandom = 1 + rand()%(100);

    do {
        cout << "Ingrese un numero: "; cin >> numero;
        if (numero > numeroRandom) {
            cout<< "Ingrese un numero menor" << endl;
        }
        if (numero < numeroRandom) {
            cout<< "Ingrese un numero mayor" << endl;
        }

        contador++;
    }while (numero != numeroRandom);

    cout << "\n--- Resultados ---" << endl;
    cout <<  "Intentos: " <<  contador << endl;
    cout << "Numero aleatorio: " << numeroRandom << endl;

    return 0;
}
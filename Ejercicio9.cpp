#include <iostream>
#include <signal.h>
using namespace std;


int main() {
    char c;
    cout << "Ingresa un caracter: "; cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) {
        cout << "El caracter esta en minuscula: " << c << endl;
    }else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout << "El caracter esta en mayuscula: " << c << endl;
    }else {
        cout << "El caracter no es una vocal o es un dato invalido\n";
    }



    return 0;
}
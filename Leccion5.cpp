#include <iostream>
using namespace std;


int main() {
    int edad;
    char sexo[10];
    float altura;

    cout << "Digite su edad: "; cin >> edad;
    cout << "Digite su sexo: "; cin >> sexo;
    cout << "Digite su altura (mts): "; cin >> altura;

    cout << "\nEdad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << endl;

    return 0;
}


/*
Al colocar diferentes tipo de datos,
en variables no capaces de almacenarlos,
el programa suele terminar irruptivamente.
*/
//Determinar entre 3 numeros cual es el mayor
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout<<"Ingrese el primer numero: "; cin>>num1;
    cout<<"Ingrese el segundo numero: "; cin>>num2;
    cout<<"Ingrese el tercer numero: "; cin>>num3;
    if( num1 == num2 && num1 == num3 && num2 == num3 && num1 == num3) {
        cout << "Los tres numeros son iguales " << num1;
    }else if (num1 > num2 && num1 > num3) {
        cout << "El numero: " << num1 << " es el mayor de los 3";
    }else if (num2 > num1 && num2 > num3) {
        cout << "El numero: " << num2 << " es el mayor de los 3";
    }else {
        cout << "El numero: " << num3 << " es el mayor de los 3";
    }

    return 0;
}
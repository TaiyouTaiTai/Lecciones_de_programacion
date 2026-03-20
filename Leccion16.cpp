#include <iostream>
using namespace std;


int main() {
    int edad;
    cout << "Digite su edad: "; cin >> edad;

    if (edad >= 18 && edad <= 25) {
    /*
    .
..
...
....
.....
......
.......
    */
        cout << "La edad se encuentra en el rango de 18-25" << endl;
    }else{
        cout << "La edad ingresada no se encuentra en el rango: " << edad << endl;
    }


    return 0;
}
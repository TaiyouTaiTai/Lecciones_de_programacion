#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float cateto1, cateto2, hipotenusa;

    cout << "Ingresa el cateto 1: "; cin >> cateto1;
    cout << "Ingresa el cateto 2: "; cin >> cateto2;
    hipotenusa = sqrt((cateto1 - cateto2)/2);

    cout.precision(2);
    cout << "\nEl hipotenusa es: " << hipotenusa << endl;



}
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    long n,x = 0, y = 1, z = 1;
    cout << "Ingrese el numero de elementos: "; cin >> n;

    for (int i = 1; i <= n; i++) {
        z = x + y;
        cout << z << " ";
        x = y;
        y = z;
    }

    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int saldoInicial = 1000, opc;
    float extra, saldo = 0;
    cout << "\tBienvenido a su cajero automatico..." << endl;
    cout << "1. Ingresar dinero en cuenta." << endl;
    cout << "2. Retirar dinero de la cuenta." << endl;
    cout << "3. Salir." << endl;
    cout << "Ingrese una opcion: "; cin >> opc;

    switch (opc) {
        case 1:
            cout << "\nIngrese la cantidad de dinero a ingresar: "; cin >> extra;
            saldo = extra + saldoInicial;
            cout << "\nDinero en la cuenta: " << saldo << "$" << endl;
            break;
        case 2:
            cout << "\nIngrese la cantidad de dinero a retirar: "; cin >> extra;
            if (extra > saldoInicial || extra < 0) {
                cout << "Cantidad de dinero insuficiente para retiro. Disponible: " << saldoInicial << "$" << endl;
            }else {
                saldo = saldoInicial - extra;
                cout << "\nDinero en la cuenta: " << saldo << "$" << endl;
            }
            break;
        case 3:
            cout << "Saliendo del programa.... ";
        default: cout << "Opcion no valida";
    }
    return 0;
}
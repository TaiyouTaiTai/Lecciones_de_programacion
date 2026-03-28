#include <iostream>
using namespace std;



int main() {
    int aprobaron3 = 0, aprobaron1 = 0, reprobaronTodo = 0;
    float nota1, nota2, nota3;
    float minima = 60.0;

    for (int i = 1; i <= 10; i++) {
        cout << "Alumno " << i << endl;
        cout << "Nota examen 1: "; cin >> nota1;
        cout << "Nota examen 2: "; cin >> nota2;
        cout << "Nota examen 3: "; cin >> nota3;

        bool e1 = nota1 >= minima;
        bool e2 = nota2 >= minima;
        bool e3 = nota3 >= minima;

        if (e1 && e2 && e3) {
            aprobaron3++;
        } else if (e1 || e2 || e3) {
            aprobaron1++;
        } else {
            reprobaronTodo++;
        }
    }

    cout << "\n--- Resultados ---" << endl;
    cout << "Aprobaron los 3:    " << aprobaron3 << endl;
    cout << "Aprobaron al menos 1: " << aprobaron1 << endl;
    cout << "No aprobaron nada:  " << reprobaronTodo << endl;

    return 0;
}
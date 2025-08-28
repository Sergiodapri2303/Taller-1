#include <iostream>
#include <string>
using namespace std;

int main() {
    string operacion;
    double num1, num2;

    cout << "Ingrese la operacion (sumar, restar, multiplicar, dividir): ";
    cin >> operacion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (operacion == "sumar") {
        cout << "Resultado: " << (num1 + num2) << endl;
    }
    else if (operacion == "restar") {
        cout << "Resultado: " << (num1 - num2) << endl;
    }
    else if (operacion == "multiplicar") {
        cout << "Resultado: " << (num1 * num2) << endl;
    }
    else if (operacion == "dividir") {
        if (num2 == 0) {
            cout << "Error: No se puede dividir entre cero." << endl;
        } else {
            cout << "Resultado: " << (num1 / num2) << endl;
        }
    }
    else {
        cout << "Operacion no reconocida." << endl;
    }

    return 0;
}

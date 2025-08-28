#include <iostream>
using namespace std;

int main() {
    int dia, mes;
    int valido = 1;

    cout << "Ingrese su fecha de nacimiento (dd mm): ";
    cin >> dia >> mes;

    if (mes < 1 || mes > 12) {
        valido = 0;
    }
    else {
        int diasMes;
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            diasMes = 31;
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            diasMes = 30;
        }
        else {
            diasMes = 28; // Febrero fijo en 28
        }

        if (dia < 1 || dia > diasMes) {
            valido = 0;
        }
    }

    if (valido == 1) {
        cout << "Fecha valida. Puede aplicar a la promocion." << endl;
    } else {
        cout << "Fecha invalida. No se puede aplicar el descuento." << endl;
    }

    return 0;
}

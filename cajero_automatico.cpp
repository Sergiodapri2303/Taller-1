#include <iostream>
using namespace std;

int main() {
    int pinCorrecto = 1234;
    int pinIngresado;
    int saldo = 1000;
    int opcion, retiro;

    cout << "Ingrese su PIN de 4 digitos: ";
    cin >> pinIngresado;

    if (pinIngresado == pinCorrecto) {
        cout << "Acceso concedido.\n";
        cout << "\n--- MENU ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar dinero\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Su saldo actual es: $" << saldo << endl;
        }
        else if (opcion == 2) {
            cout << "Ingrese cantidad a retirar: ";
            cin >> retiro;
            if (retiro <= saldo) {
                saldo = saldo - retiro;
                cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
            } else {
                cout << "Saldo insuficiente.\n";
            }
        }
        else if (opcion == 3) {
            cout << "Gracias por usar el cajero.\n";
        }
        else {
            cout << "Opcion invalida.\n";
        }
    }
    else {
        cout << "PIN incorrecto. Tarjeta bloqueada.\n";
    }

    return 0;
}

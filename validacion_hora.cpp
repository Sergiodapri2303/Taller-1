#include <iostream>
using namespace std;

int main() {
    int hora, minuto;

    cout << "Ingrese la hora de entrada (hh mm): ";
    cin >> hora >> minuto;

    if (hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59) {
        cout << "Horario valido: " << hora << ":" << minuto << endl;
    } else {
        cout << "Horario invalido. Intente de nuevo." << endl;
    }

    return 0;
}

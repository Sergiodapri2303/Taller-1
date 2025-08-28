#include <iostream>
using namespace std;

int main() {
    string tipo;
    int productos;
    double precio, total, descuento;

    cout << "Ingrese tipo de cliente (VIP o REGULAR): ";
    cin >> tipo;
    cout << "Ingrese numero de productos: ";
    cin >> productos;
    cout << "Ingrese precio por producto: ";
    cin >> precio;

    total = productos * precio;
    descuento = 0;

    if (tipo == "VIP" || tipo == "vip") {
        descuento = total * 0.20;
    }
    else if (tipo == "REGULAR" || tipo == "regular") {
        if (productos >= 4) {
            descuento = total * 0.10;
        }
    }

    cout << "Total sin descuento: $" << total << endl;
    cout << "Descuento aplicado: $" << descuento << endl;
    cout << "Total a pagar: $" << (total - descuento) << endl;

    return 0;
}

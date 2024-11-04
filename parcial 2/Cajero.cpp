/*Cajero*/
#include <iostream>

using namespace std;

int main() {
    int opc, pin = 1234, pin_c, pin_n, saldo = 10000, cant;
    long int num_d;
    char res;

    while (opc != 5){
        cout << "===========Cajero===========" << endl;
        cout << "¿Qué es lo que quieres hacer?" << endl;
        cout << "1) Retirar dinero" << endl;
        cout << "2) Consultar saldo" << endl;
        cout << "3) Cambiar pin" << endl;
        cout << "4) Transferir fondos" << endl;
        cout << "5) Salir" << endl;
        cout << "¿Elige una opción: " << endl;
        cin >> opc;

        switch (opc) {
        case 1: 
            cout << "Ingresa la cantidad que deseas retirar: " << endl;
            cin >> cant;
            cout << "¿Deseas conformar la transaccion? (s, n)" << endl;
            cin >> res;

            if (cant < saldo and res == 's') {
                saldo = saldo - cant;
                cout << "Transaccion confirmada" << endl;
            } else if (cant > saldo) {
                cout << "Fondos insuficientes" << endl;
            } else if (res == 'n') {
                cout << "Transaccion rechazada" << endl;
            }
        break;
        case 2: 
            cout << "Su saldo es: $" << saldo << endl;
        break;
        case 3:
            cout << "Ingresa el pin actual: " << endl;
            cin >> pin_c;

            if (pin == pin_c){
                cout << "Ingresa el nuevo pin: " << endl;
                cin >> pin_n;
                if (pin == pin_n){
                    cout << "Introduzca un pin diferente al anterior" << endl;
                } else {
                    cout << "Confirma el nuevo pin: " << endl;
                    cin >> pin_c;

                    if (pin_n == pin_c){
                        pin = pin_n;
                        cout << "El pin se a cambiado con exito" << endl;
                    }else {
                        cout << "Error al cambiar el pin" << endl;
                    }
                }
                
            } else {
                cout << "Contraseña incorrecta" << endl;
            }
        break;
        case 4:
            cout << "Ingresa el numero de cuenta de destino: " << endl;
            cin >> num_d;
            cout << "Ingresa la cantidad que deseas retirar: " << endl;
            cin >> cant;
            cout << "¿Deseas conformar la transaccion? (s, n)" << endl;
            cin >> res;

            if (cant < saldo and res == 's') {
                saldo = saldo - cant;
                cout << "Transaccion confirmada" << endl;
            } else if (cant > saldo) {
                cout << "Fondos insuficientes" << endl;
            } else if (res == 'n') {
                cout << "Transaccion rechazada" << endl;
            }
        break;
        case 5:
            cout << "Saliendo" << endl;
        break;
        default:
            cout << "Elige una opción entre 1 y 3" << endl;
        break;
        }
    }

    return 0;
}
/*Calculadora*/
#include <iostream>

using namespace std;

int main() {
    float num1, num2, res;
    int opc = 0;

    do {
        cout << "===========Menu===========" << endl;
        cout << "¿Qué es lo que quieres hacer?" << endl;
        cout << "1) Sumar" << endl;
        cout << "2) Restar" << endl;
        cout << "3) Multiplicar" << endl;
        cout << "4) Dividi" << endl;
        cout << "5) Salir" << endl;
        cout << "¿Elige una opción: " << endl;
        cin >> opc;
        
        switch (opc) {
            case 1: 
                cout << "Ingresa el primer numero:" << endl;
                cin >> num1;
                cout << "Ingresa el segundo numero:" << endl;
                cin >> num2;
                res = num1 + num2;
                cout << "El resultado de la suma de: " << num1 << " + " << num2 << " es: " << res << endl;
            break;
            case 2: 
                cout << "Ingresa el primer numero:" << endl;
                cin >> num1;
                cout << "Ingresa el segundo numero:" << endl;
                cin >> num2;
                res = num1 - num2;
                cout << "El resultado de la resta de: " << num1 << " - " << num2 << " es: " << res << endl;
            break;
            case 3:
                cout << "Ingresa el primer numero:" << endl;
                cin >> num1;
                cout << "Ingresa el segundo numero:" << endl;
                cin >> num2;
                res = num1 * num2;
                cout << "El resultado de la multiplicacion de: " << num1 << " * " << num2 << " es: " << res << endl;
            break;
            case 4:
                cout << "Ingresa el primer numero:" << endl;
                cin >> num1;
                cout << "Ingresa el segundo numero:" << endl;
                cin >> num2;
                res = num1 / num2;
                cout << "El resultado de la divicion de: " << num1 << " / " << num2 << " es: " << res << endl;
            break;
            case 5:
                cout << "Gracias por usar el programa" << endl;
            break;
            default:
                cout << "Elige una opción entre 1 y 5" << endl;
            break;
        }
    } while (opc != 5);

    return 0;
}
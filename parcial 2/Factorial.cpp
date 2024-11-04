#include <iostream>

using namespace std;

int main (){
    int contra = 1234, contra_c, opc, num, fac = 1;

    cout << "Usuario: Admin" << endl;
    cout << "Ingresa tu contraseña: " << endl;
    cin >> contra_c;
    
    do {
        
        if (contra_c != contra) {
            cout << "contraseña incorrectra: " << endl;
            cout << "Ingresa tu contraseña: " << endl;
            cin >> contra_c;
        } 
    } while (contra != contra_c);
    
    do {
        cout << "===========Factorial===========" << endl;
        cout << "¿Qué es lo que quieres hacer?" << endl;
        cout << "1) Calcular el factorial de un numero" << endl;
        cout << "2) Mostrar el procedimiento" << endl;
        cout << "3) Salir" << endl;
        cout << "¿Elige una opción: " << endl;
        cin >> opc;

        switch (opc)
        {
        case 1:
            do{
                cout << "Ingresa un numero entero positivo: " << endl;
                cin >> num;
            } while (num < 0);
            for (int i = 1; i <= num; i++) {
                fac = fac * i;
                
                
            }
            cout << "El resultado es: " << fac <<endl;
        break;
        case 2:
            fac = 1;
            cout << num << "!= ";
            for (int i = num; i >= 1; i--) {
                fac = fac * i;
                cout << i << " * ";
            }
            
            cout << " = " << fac << endl;
            cout << endl;
            

        break;
        case 3:
            cout << "Saliendo" << endl;
        break;
        default:
            cout << "Ingresa una opcion entre 1 y 3" << endl;
        break;
        }
    } while (opc != 3);
    return 0;
}
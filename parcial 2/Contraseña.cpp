#include <iostream>

using namespace std;

int main (){
    char usuario, contraseña, x;

    cout << "Escribe el usuario" << endl;
    cin >> usuario;
    cout << "Escribe la contraseña: " << endl;
    cin >> contraseña;
    cout << "Vuelve a escribir la contraseña: " << endl;
    cin >> x;

    if (contraseña != x){
        do{
            cout << "Usuario: " << usuario << endl;
            cout << "Contraseña incorrecta: " << endl;
            cout << "Vuelve a escribir la contraseña: " << endl;
            cin >> x;
        } while(contraseña != x);
    }

    cout << "Usuario: " << usuario << endl;
    cout << "Contraseña correcta" << endl;
    
    return 0;
}
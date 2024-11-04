/*Do While*/
#include <iostream>

using namespace std;

int main (){
    double x;
    char respuesta;

    do{
        cout << "Dame un numero: " << endl;
        cin >> x;

        if (x < 0){
            x = -x;
        }

        cout << "Su valor apsoluto es: " << x << endl;
        cout << "Quieres continuar (s/n): " << endl;
        cin >> respuesta;
    }while (respuesta != 'n');

    return 0;
}
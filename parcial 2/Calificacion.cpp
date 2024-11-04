/*Calificacion*/
#include <iostream>

using namespace std;

int main (){
    float cal, prom, acum;

    for (int i = 0; i < 3; i++) {
        cout << "Ingresa la calificacion del " << i + 1 << " parcial" << endl;
        cin >> cal;
        acum = acum + cal;
    }

    prom = acum / 3;

    cout << "Tu promedio es: " << prom << endl;

    if (prom >= 6) {
        cout << "Aprobaste" << endl;
    } else {
        cout << "Reprobaste" << endl;
    }
    
    return 0;
}
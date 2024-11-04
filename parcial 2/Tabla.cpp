/*Tabla*/
#include <iostream>

using namespace std;

int main (){
    int num;

    cout << "¿Que tabla de multiplicar desdeas realizar?" << endl;
    cin >> num;
    
    for (int i = 1; i <= 10; i++){
        cout << num << " * " << i << " = "<< num * i << endl;
    }

    return 0;
}
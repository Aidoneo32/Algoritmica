/*while*/
#include <iostream>

using namespace std;

int main (){
    double num = 1, pro = 1, sum;

    while (num != 0) {
        cout << "Escribe un numero diferente de cero: " << endl;
        cin >> num;
        
        sum = sum + num;
        pro = pro * num;
        
        cout << "El producto total es: " << pro << " y la suma total es: " << sum << endl;
    }

    return 0;
}
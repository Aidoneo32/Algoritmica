#include <iostream>

using namespace std;

int main()
{
    int dia,mes,ano,edad;
    cout <<"ingrese su dia de nacimiento: ";
    cin >>dia;
    cout <<"ingrese su mes de nacimiento: ";
    cin >>mes;
    cout <<"ingrese su año de nacimiento: ";
    cin >>ano;

    edad=2024-ano;

    cout <<"tu edad es de: " << edad <<"años" <<endl;
    return 0;
}

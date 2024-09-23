#include <conio.h>
#include <stdio.h>


int main()
{
    char nombre[20];
    char apellido[20];

    printf("Introduzca su nombre: ");
    scanf("%s", nombre);
    printf("INtroduzca su apellido:");
    scanf("%s", apellido);
    printf("Hola %s %s buenos dias.", nombre, apellido, 161);

    getch();
    return 0;
}

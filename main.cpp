#include <conio.h>
#include <stdio.h>

int main()
{
    int dia, mes, ano, edad;
    printf ("dame tu dia de nacimiento");
    scanf ("%d",&dia);

    printf ("dame tu mes de nacimiento");
    scanf ("%d",&mes);

    printf("dame tu ano de nacimient");
    scanf ("%d",&ano);
    printf ("tu dia de nacimiento es: %d",dia);
    printf ("tu mes de nacimiento es: %d",mes);

    printf("tu ano de nacimiento es: %d",ano);
    edad=2024-ano;
    printf("tu edad es %d",edad);

getch();

}

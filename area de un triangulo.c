#include <stdio.h>

int main()
{
    //Definir variables
    float base, altura, Area;

    printf("Ingrese los datos:");

    printf("Ingrese la base:");
    scanf("%f",&base);

    printf("Ingrese la altura:");
    scanf("%f",&altura);

    Area=(base*altura)/2;

    printf("=============\n");
    printf("el area del triangulo es: %.2fm2\n",Area);
    printf("=========\n");


    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    float radio, altura, area_lateral, volumen;
    const float pi = 3.14159265;

    printf("--- CALCULO DE GEOMETRIA DEL CILINDRO ---\n");

    printf("Ingrese el valor del radio (r): ");
    scanf("%f", &radio);
    printf("Ingrese el valor de la altura (h): ");
    scanf("%f", &altura);
    if(radio<=0 && altura<=0) {
        printf("\nERROR: El radio y la altura deben ser mayores a cero.\n");
        printf("No se pueden realizar los calculos con valores invalidos.\n");
    }
else {
    // Fórmulas matemáticas
    area_lateral = 2 * pi * radio * altura;
    volumen = pi * pow(radio, 2) * altura;}


    printf("\nResultados calculados:\n");
    printf("-------------------------------------\n");
    printf("Radio ingresado:         %.2f\n", radio);
    printf("Altura ingresada:        %.2f\n", altura);
    printf("-------------------------------------\n");
    printf("Area lateral:            %.2f unidades cuadradas\n", area_lateral);
    printf("Volumen:                 %.2f unidades cubicas\n", volumen);
    printf("-------------------------------------\n");

    return 0;
}

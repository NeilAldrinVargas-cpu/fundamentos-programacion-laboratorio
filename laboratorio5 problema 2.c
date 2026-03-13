#include <stdio.h>
#include <math.h>

int main() {
    float lab1, lab2, lab3, examen_final, proyecto_final, nota_final;

    printf("Nota Lab 1: ");
    scanf("%f", &lab1);
    printf("Nota Lab 2: ");
    scanf("%f", &lab2);
    printf("Nota Lab 3: ");
    scanf("%f", &lab3);
    printf("Nota Examen_final: ");
    scanf("%f", &examen_final);
    printf("Nota Proyecto_final: ");
    scanf("%f", &proyecto_final);

    nota_final = (lab1*0.15) + (lab2*0.15) + (lab3*0.15) + (examen_final*0.35) + (proyecto_final*0.20);

    printf("----------------------\n");
    printf("\nNota Final: %.2f\n", nota_final);
    if(nota_final>=51) { printf("Felidades aprobaste\n");}
    else { printf("Lo lamento reprobaste\n");}
    printf("----------------------\n");


    return 0;
}


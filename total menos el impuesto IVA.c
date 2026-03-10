#include <stdio.h>

int main() {

//Declaracion de variable
float dia1, dia2, dia3, dia4, dia5, dia6, dia7, ventasemanal, Iva, ganancia;

 // Entrada de datos
printf ("Ingrese el primer dia: ");
scanf("%f",&dia1);

// Entrada de datos
printf ("Ingrese el segundo dia: ");
scanf("%f",&dia2);

// Entrada de datos
printf ("Ingrese el tercer dia: ");
scanf("%f",&dia3);

// Entrada de datos
printf ("Ingrese el cuarto dia: ");
scanf("%f",&dia4);

// Entrada de datos
printf ("Ingrese el quinto dia: ");
scanf("%f",&dia5);

// Entrada de datos
printf ("Ingrese el sexto dia: ");
scanf("%f",&dia6);

// Entrada de datos
printf ("Ingrese el septimo dia: ");
scanf("%f",&dia7);


// Proceso
ventasemanal= dia1 + dia2 + dia3 + dia4 + dia5 + dia6 + dia7 ;
Iva= (ventasemanal * 13)/100 ;
ganancia= ventasemanal - Iva;



// Salida
printf("La ventasemanal es: %.5f\n", ventasemanal);
printf("El Iva es: %.5f\n", Iva);
printf("La ganancia es: %.5f\n", ganancia);





return 0;


}

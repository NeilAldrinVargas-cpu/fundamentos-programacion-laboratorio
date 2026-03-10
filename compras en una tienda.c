#include <stdio.h>

int main()
{
    //definir variables
    char nombre_del_cliente[50];
    float cantidad, total_a_pagar;
    const float valor_del_cuaderno = 8 ;

    //Ingrese los datos
    printf("Ingrese su nombre:");
    scanf("%[^\n]s",nombre_del_cliente);

    printf("cuantos cuadernos quiere:");
    scanf("%f",&cantidad);

    //Realizar la operacion
    total_a_pagar=valor_del_cuaderno*cantidad;


    //Los resultados
    printf("================\n");

    printf("cliente: %s\n",nombre_del_cliente);
    printf("El total que debe pagar: %.2fbs\n", total_a_pagar);
    printf("--gracias por su compra---\n");
    printf("================\n");


    return 0;
}

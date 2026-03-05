#include <stdio.h>

int main() {
    float horas_diarias, pago_por_hora, pago_diario, dias_trabajados, pago_mensual;
    char nombre[50];

    printf("--- Registro de Sueldo Mensual ---\n");
    printf("Por favor, introduce tu nombre: ");
    scanf(" %[^\n]", nombre);

    // Entrada de datos
    printf("¿Cuantas horas trabajas al dia?: ");
    scanf("%f", &horas_diarias);

    printf("¿Cuanto te pagan por hora?: ");
    scanf("%f", &pago_por_hora);

    printf("¿Cuantos dias trabajaste en el mes?: ");
    scanf("%f", &dias_trabajados);

    // Cálculos matemáticos
    pago_diario = horas_diarias * pago_por_hora;
    pago_mensual = pago_diario * dias_trabajados;

    // Salida de resultados
    printf("\n==================================\n");
    printf("¡Hola, %s!\n", nombre);
    printf("Tu pago por dia es: $%.2f\n", pago_diario);
    printf("Tu sueldo total del mes es: $%.2f\n", pago_mensual);
    printf("==================================\n");

    return 0;
}

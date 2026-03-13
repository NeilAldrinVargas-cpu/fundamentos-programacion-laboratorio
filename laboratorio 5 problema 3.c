#include <stdio.h>

int main() {
    char nombre[50];
    int antiguedad;
    float sueldo_basico, bono , total_ganado;
    float descuento_afp, impuesto_rc_iva = 0, salario_neto,excedente;

    // Entrada de datos
    printf("Ingrese el nombre del trabajador: ");
    scanf("%[^\n]", nombre);
    printf("Ingrese los años de antigüedad: ");
    scanf("%d", &antiguedad);
    printf("Ingrese el sueldo básico (Bs): ");
    scanf("%f", &sueldo_basico);

    // 1. Cálculo del Bono de Antigüedad (10% si > 5 años)
    if (antiguedad > 5) {
        bono = sueldo_basico * 0.10;
    }
    else {bono=0;}

    total_ganado = sueldo_basico + bono;

    // 2. Descuento de Ley AFP (12.71% fijo)
    descuento_afp = total_ganado * 0.1271;

    // 3. Impuesto RC-IVA (13% sobre el excedente de 9,500)
    if (total_ganado > 9500) {
         excedente = total_ganado - 9500;
        impuesto_rc_iva = excedente * 0.13;
    }
    else{impuesto_rc_iva=0;}

    // 4. Salario Neto Final
    salario_neto = total_ganado - descuento_afp - impuesto_rc_iva;

    // Salida de resultados
    printf("\n--- RESULTADOS DEL CALCULO ---\n");
    printf("Trabajador:      %s\n", nombre);
    printf("Total Ganado:    %.2f Bs\n", total_ganado);
    printf("Descuento AFP:   %.2f Bs\n", descuento_afp);
    printf("Impuesto RC-IVA: %.2f Bs\n", impuesto_rc_iva);
    printf("------------------------------\n");
    printf("SALARIO NETO:    %.2f Bs\n", salario_neto);

    return 0;
}





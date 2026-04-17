#include <iostream>
using namespace std;

int main() {
    int numero, temporal;
    int maximo = -1;
    int minimo = 10;
    int contadorMaximo = 0;


    do {
        cout << "Ingrese el numero de consumo diario (entero positivo): ";
        cin >> numero;
        if (numero <= 0) cout << "Error: debe ser positivo." << endl;
    } while (numero <= 0);

    temporal = numero;


    while (temporal > 0) {
        int digito = temporal % 10;

        // Determinar máximo
        if (digito > maximo) {
            maximo = digito;
            contadorMaximo = 1; // Reiniciamos el conteo al encontrar un nuevo máximo
        } else if (digito == maximo) {
            contadorMaximo++; // Incrementamos si el dígito es igual al actual máximo
        }

        // Determinar mínimo
        if (digito < minimo) {
            minimo = digito;
        }

        temporal /= 10; // Eliminar el dígito ya procesado
    }


    cout << "\n--- Resultados del analisis ---" << endl;
    cout << "Consumo maximo: " << maximo << " GB" << endl;
    cout << "Consumo minimo: " << minimo << " GB" << endl;
    cout << "El valor maximo se repitio " << contadorMaximo << " veces." << endl;

    return 0;
}

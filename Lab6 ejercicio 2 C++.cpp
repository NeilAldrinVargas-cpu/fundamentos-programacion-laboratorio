#include <iostream>

using namespace std;

int main() {
    // Declaración de variables según el problema
    float celsius;
    int opcion;
    float resultado;

    cout << "--- CONVERSOR DE TEMPERATURA ---" << endl;
    cout << "Ingrese la cantidad en grados Celsius: ";
    cin >> celsius;

    // Menú de selección
    cout << "\nSeleccione la escala a la que desea convertir:" << endl;
    cout << "1. Fahrenheit" << endl;
    cout << "2. Kelvin" << endl;
    cout << "3. Rankine" << endl;
    cout << "Ingrese opcion: ";
    cin >> opcion;

    // Estructura switch para aplicar las fórmulas matemáticas
    switch (opcion) {
        case 1:
            // Fórmula: F = (C * (9/5)) + 32
            // Nota: Usamos 9.0/5.0 para asegurar que la división sea decimal
            resultado = (celsius * (9.0 / 5.0)) + 32;
            cout << celsius << " grados Celsius equivalen a " << resultado << " grados Fahrenheit." << endl;
            break;

        case 2:
            // Fórmula: K = C + 273.15
            resultado = celsius + 273.15;
            cout << celsius << " grados Celsius equivalen a " << resultado << " Kelvin." << endl;
            break;

        case 3:
            // Fórmula: R = (C * (9/5)) + 491.67
            resultado = (celsius * (9.0 / 5.0)) + 491.67;
            cout << celsius << " grados Celsius equivalen a " << resultado << " grados Rankine." << endl;
            break;

        default:
            cout << "Opcion no valida. Intente de nuevo." << endl;
            break;
    }

    return 0;
}

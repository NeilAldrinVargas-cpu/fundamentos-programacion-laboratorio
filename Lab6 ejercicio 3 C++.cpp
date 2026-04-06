#include <iostream>

using namespace std;

int main() {
    float num1, num2, resultado;
    int opcion;

    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;

    cout << "Seleccione operacion:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case 2:
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case 3:
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case 4:
            // Validación de división entre cero
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            break;

        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int pin, intentos = 0;
    bool esValido = false;

    while (intentos < 3 && !esValido) {
        cout << "\nIntento " << (intentos + 1) << " de 3. Ingrese su PIN (4 digitos): ";
        cin >> pin;

        // 1. Validar longitud (debe estar entre 1000 y 9999 para tener 4 dígitos)
        if (pin < 1000 || pin > 9999) {
            cout << "PIN invalido: Debe tener exactamente 4 digitos." << endl;
        }
        else {
            // 2. Validar dígitos consecutivos
            int temporal = pin;
            bool tieneConsecutivos = false;
            int ultimoDigito = -1;

            // Analizamos los 4 dígitos
            for (int i = 0; i < 4; i++) {
                int digitoActual = temporal % 10;
                if (digitoActual == ultimoDigito) {
                    tieneConsecutivos = true;
                    break;
                }
                ultimoDigito = digitoActual;
                temporal /= 10;
            }

            if (tieneConsecutivos) {
                cout << "PIN invalido: Contiene digitos consecutivos iguales." << endl;
            } else {
                esValido = true;
                cout << "PIN valido. Acceso concedido." << endl;
            }
        }

        intentos++;
        if (!esValido && intentos == 3) {
            cout << "\nCuenta bloqueada." << endl;
        }
    }

    return 0;
}

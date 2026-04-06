#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero del 1 al 7: ";
    cin >> numero;

    switch (numero) {
        case 1:
            cout << "Lunes - Dia laboral" << endl;
            break;
        case 2:
            cout << "Martes - Dia laboral" << endl;
            break;
        case 3:
            cout << "Miercoles - Dia laboral" << endl;
            break;
        case 4:
            cout << "Jueves - Dia laboral" << endl;
            break;
        case 5:
            cout << "Viernes - Dia laboral" << endl;
            break;
        case 6:
            cout << "Sabado - Fin de semana" << endl;
            break;
        case 7:
            cout << "Domingo - Fin de semana" << endl;
            break;
        default:
            cout << "Numero invalido. Por favor, ingrese un valor entre 1 y 7." << endl;
            break;
    }

    return 0;
}

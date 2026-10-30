#include <iostream>
using namespace std;


void mostrarParidad(int numero) {
    if (numero % 2 == 0) {
        cout << "El numero es Par" << endl;
    } else {
        cout << "El numero es Impar" << endl;
    }
}

int main() {
    int num;
    cout << "=== Ejercicio 1: Par o Impar ===" << endl;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    
    mostrarParidad(num);

    return 0;
}
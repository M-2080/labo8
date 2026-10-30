#include <iostream>

using namespace std;


int mayor(int a, int b, int c) {
    int maximo = a;
    if (b > maximo) {
        maximo = b;
    }
    if (c > maximo) {
        maximo = c;
    }
    return maximo;
}

int main() {
    int n1, n2, n3;

    cout << "=== EJERCICIO 3: MAYOR DE 3 NUMEROS ===" << endl;
    cout << "INGRESE EL PRIMER NUMERO: ";
    cin >> n1;
    cout << "INGRESE EL SEGUNDO NUMERO: ";
    cin >> n2;
    cout << "INGRESE EL TERCER NUMERO: ";
    cin >> n3;

    
    int resultadoMayor = mayor(n1, n2, n3);

    cout << "Rl numero mayor es: " << resultadoMayor << endl;

    return 0;
}
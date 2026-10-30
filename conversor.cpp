#include <iostream>

using namespace std;

// Función que convierte de Celsius a Fahrenheit y devuelve el resultado
float celsiusTFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float tempCelsius;

    cout << "=== EJERCICIO 2: CONVERSOR DE TEMPERATURA ===" << endl;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> tempCelsius;

    // Llamada a la función asignando el retorno a una variable
    float tempFahrenheit = celsiusTFahrenheit(tempCelsius);

    cout << tempCelsius << " C equivalen a " << tempFahrenheit << " F" << endl;

    return 0;
}
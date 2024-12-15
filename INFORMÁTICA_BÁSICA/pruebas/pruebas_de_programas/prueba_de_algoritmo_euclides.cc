#include <iostream>

// Función recursiva para encontrar el GCD usando el algoritmo de Euclides
int GreatestCommonDivisor(int a, int b) {
    // Caso base: si b es cero, el GCD es a
    if (b == 0) {
        return a;
    }
    // Llamada recursiva
    return GreatestCommonDivisor(b, a % b);
}

int main() {
    int numero_a{0}, numero_b{0};

    std::cout << "Ingresa dos números: ";
    std::cin >> numero_a >> numero_b;

    // Validar si los números son no negativos
    if (numero_a < 0 || numero_b < 0) {
        std::cout << "Por favor, ingrese números no negativos." << std::endl;
        return 1;  // Salida con error
    }

    // Manejar el caso en que ambos números son cero
    if (numero_a == 0 && numero_b == 0) {
        std::cout << "El GCD no está definido para (0, 0)." << std::endl;
        return 1;  // Salida con error
    }

    int resultado = GreatestCommonDivisor(numero_a, numero_b);

    std::cout << "El máximo común divisor es: " << resultado << std::endl;
    return 0;
}

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file sentinel_main.cc
 * @author Steven
 * @date 2024-12-31
 * @brief The main function of the program
 * @bug There are no known bugs
 */

#include "sentinel.h"

int main(int argc, char* argv[]) {
    Usage(argc, argv);

    std::string cadena1 = argv[1];
    std::string cadena2 = argv[2];

    // Comprobar si las cadenas están ordenadas
    if (!estaOrdenada(cadena1) || !estaOrdenada(cadena2)) {
        std::cerr << "Error: las cadenas no están ordenadas" << std::endl;
        return 1;
    }

    // Combinar las cadenas
    std::string resultado = combinarCadenasOrdenadas(cadena1, cadena2);

    // Comprobar si la cadena resultante está ordenada
    if (estaOrdenada(resultado)) {
        std::cout << "La cadena resultante esta ordenada: " << resultado << std::endl;
    } else {
        std::cerr << "Error: la cadena resultante no está ordenada" << std::endl;
    }

    return 0;
}

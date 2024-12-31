/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file sentinel.cc
 * @author Steven
 * @date 2024-12-31
 * @brief The program.cc that defines the functions we are going to use 
 * @bug There are no known bugs
 */

#include "sentinel.h"

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa dos strings para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc != 3) {
    std::cout << argv[0] << ": One string or two are not being passed correctly" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information " << std::endl;
    exit(EXIT_SUCCESS);
  } 
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string hHelpText = "This program reads 2 phrases and prints their combination arranged";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

// Función que verifica si una cadena está ordenada alfabéticamente
bool estaOrdenada(const std::string& cadena) {
    for (size_t i = 1; i < cadena.size(); ++i) {
        if (cadena[i] < cadena[i - 1]) {
            return false;
        }
    }
    return true;
}

// Función que combina dos cadenas ordenadas manteniendo el orden
std::string combinarCadenasOrdenadas(const std::string& cadena1, const std::string& cadena2) {
    std::string resultado;
    size_t i = 0, j = 0;

    // Añadimos un centinela '~' al final de ambas cadenas
    std::string c1 = cadena1 + "~";
    std::string c2 = cadena2 + "~";

    // Combinamos las cadenas
    while (i < c1.size() - 1 || j < c2.size() - 1) {
        if (c1[i] <= c2[j]) {
            resultado += c1[i];
            ++i;
        } else {
            resultado += c2[j];
            ++j;
        }
    }

    return resultado;
}
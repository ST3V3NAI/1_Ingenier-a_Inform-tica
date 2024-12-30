/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file find_first_of.cc
 * @author Steven
 * @date 2024-12-29
 * @brief Implementación de las funciones que se usaran en find_first_of
 * @bug There are no known bugs
*/

#include "combination.h"


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
    std::cout << argv[0] << ": One string is not being passed correctly" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information " << std::endl;
    exit(EXIT_SUCCESS);
  } 
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string hHelpText = "This program reads 2 phrases and prints their combination";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}


/**
 * @brief Function that combines two strings
 * 
 * @param[in] str1 First string
 * @param[in] str2 Second string
 * @return std::string Combination of strings
 */
std::string CombiningStrings(const std::string& input_string, const std::string& input_string_2) {
    std::string result;
    size_t minLength = std::min(input_string.size(), input_string_2.size());

    for (size_t i = 0; i < minLength; ++i) {
        result += input_string[i];
        result += input_string_2[i];
    }

    return result;
}
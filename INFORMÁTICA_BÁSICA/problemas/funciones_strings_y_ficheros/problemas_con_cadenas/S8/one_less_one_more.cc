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

#include "one_less_one_more.h"


/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa dos strings para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": One string is not being passed correctly" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information " << std::endl;
    exit(EXIT_SUCCESS);
  } 
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string hHelpText = "This program reads a phrase and prints other 2 with the characters changed";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void ChangingCharacters(const std::string& input_string) {
  std::string one_more, one_less;

  for(char i : input_string) {
    i += 1;
    std::cout << i;
  }

  std::cout << std::endl;

  for(char i : input_string) {
    i -= 1;
    std::cout << i;
  }

}

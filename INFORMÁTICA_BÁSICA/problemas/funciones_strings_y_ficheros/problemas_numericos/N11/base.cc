/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file base.cc
 * @author Steven
 * @date 2025-01-02
 * @brief Descripción del programa
 * @bug There are no known bugs
*/

#include "base.h"


/**
 * @brief Función que imprime el funcionamiento del programa y comprueba que funcione correctamente
 * 
 * @param[in] argc Número de cadenas
 * @param argv Matriz de argumentos
 */
void Usage(int argc, char* argv[]) {
  if(argc != 3) {
    std::cout << argv[0] << ": This programa has been executed with wrong number of parameters" << std::endl;
    std::cout << "Try to type: " << argv[0] << "--help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program needs to integer numbers to work correctly. \
                                   Use this structure => <number> <base> ";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
  * @brief Función que hace la conversión de entero en la base numerica de la base
  * @param[in] número número al que quieres hacer la conversión
  * @param[in] base la base a la que convertiras el numero
  * @return std::vector<int> Te retorna los restos
  */

std::vector<int> conversiónDeBase(int numero, int base) {
    std::vector<int> restos;

    while (numero > 0) {
        restos.push_back(numero % base);
        numero /= base;
    }

    std::reverse(restos.begin(), restos.end());

    return restos;
}

/**
  * @brief Función que muestra el vector por pantalla
  * @param[in] v vector en donde almacenamos el resultado.
  *
  */
void mostrarVector(const std::vector<int>& v) {
    for (int restos : v) {
        if (restos < 10) {
            std::cout << restos;
        } else {
            std::cout << static_cast<char>('A' + (restos - 10));
        }
    }
    std::cout << std::endl;
}

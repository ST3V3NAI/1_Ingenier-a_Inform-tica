/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file interseccion.cc
 * @author Steven
 * @date 2024-12-30
 * @brief Definición de las funciones usadas para interseccion
 * @bug There are no known bugs
*/

#include "interseccion.h"


/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa 4 numeros para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc != 5) {
    std::cout << argv[0] << ": One to four numbers are not being passed correctly" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information " << std::endl;
    exit(EXIT_SUCCESS);
  } 
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string hHelpText = "This program reads 2 intervals and calculates their intersection";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS); 
  }
}


/**
 * @brief Calcula la longitud de la intersección de dos intervalos dados.
 * 
 * La función toma como entrada los límites de dos intervalos [number_a, number_a_2] 
 * y [number_b, number_b_2]. Calcula la intersección entre ellos, si existe, y 
 * retorna la longitud de dicha intersección. Si los intervalos no se solapan, 
 * retorna 0.
 * 
 * @param[in] number_a     Inicio del primer intervalo.
 * @param[in] number_a_2   Fin del primer intervalo.
 * @param[in] number_b     Inicio del segundo intervalo.
 * @param[in] number_b_2   Fin del segundo intervalo.
 * @return int             Longitud del intervalo de intersección, o 0 si no hay intersección.
 */

void IntersectionOfInterval(int number_a, int number_a_2, int number_b, int number_b_2) {
    // Calcular los límites del intervalo de intersección
    int inicio = std::max(number_a, number_b);
    int fin = std::min(number_a_2, number_b_2);

    // Si hay intersección, mostrar el intervalo
    if (inicio <= fin) {
        std::cout << "Intersección: [" << inicio << ", " << fin << "]\n";
    } else {
        // Si no hay intersección, mostrar un mensaje
        std::cout << "No hay intersección\n";
    }
}
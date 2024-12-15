/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
 * @date Dec 4, 2023
 * @brief El programa almacena información sobre coches e imprime el precio más caro de cada tipo
 * @bug There are no known bugs
 */

#include "cars.h"

/**
 * @brief La función comprueba el número de parámetros y da las instrucciones 
 *        de uso del programa, detallanado qué parámetros hacen falta.
 * 
 * @param[in] argc. Cantidad de parámetros dada por el usuario
 * @param[in] argv. Vector que contiene dichos parámetros
 * @return Devuelve una breve descripción del programa si se ejecuta sin parámetros
 *         Devuelve una descripción detallada si se introduce "--help".
*/
bool Usage(const int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << argv[0] << " -- Coche más caro" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " <numero_de_coches>\n";
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    return false;
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << argv[0] << " -- Coche Más Caro " << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " <numero_de_coches>\n";
    std::cout << "numero_de_coches:       Número de coches a instanciar\n";
    std::cout << "Tras haber introducido el número de coches a instanciar el programa le indicará \n"
              << "qué datos debe introducir para identificar cada coche.\n";
    return false;
  }
  if (argc != 2) {
    std::cout << "Ha utilizado un número incorrecto de parámetros\n";
    std::cout << argv[0] << " -- Coche Más Caro" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " <numero_de_coches>\n";
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    return false;
  }
  return true;
}

int main(const int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }
  const int number_of_cars{std::stoi(argv[1])};
  std::vector<Car> user_cars{SaveCarData(number_of_cars)};
  SortByType(user_cars);
  ComparePricesByType(user_cars);
  return 0;
}
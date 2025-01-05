/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
 * @date Dec 4, 2024
 * @brief El programa almacena información los grafos y manda la información a un fichero o la imprime por pantalla un msg
 * @bug There are no known bugs
 */

#include "graph.h"

/**
 * @brief La función comprueba el número de parámetros y da las instrucciones 
 *        de uso del programa, detallando qué parámetros hacen falta.
 * 
 * @param[in] argc. Cantidad de parámetros dada por el usuario
 * @param[in] argv. Vector que contiene dichos parámetros
 * @return Devuelve una breve descripción del programa si se ejecuta sin parámetros
 *         Devuelve una descripción detallada si se introduce "--help".
*/
bool Usage(const int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << argv[0] << " -- Grafo Válido" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " <Tipo_de_Entrada> <Fichero_de_Salida> < <Fichero_de_Entrada>\n";
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    return false;
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << argv[0] << " -- Grafo Válido" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " <Tipo_de_Entrada> <Fichero_de_Salida> < <Fichero_de_Entrada>\n";
    std::cout << "Tipo_de_Entrada:      \"Teclado\" si desea introducir manualmente los datos\"\n"
              << "                      \"Fichero\" si va a introducir el grafo desde un fichero\n";
    std::cout << "Fichero_de_Salida:    Nombre del fichero en el que se va a escribir el grafo\n"
              << "                      Introducir \"Pantalla\" si quiere mostrar el grafo en pantalla.\n" ;
    std::cout << "Fichero_de_Entrada:   Si ha decidido introducir los datos desde un fichero, introduzca, precedido\n"
              << "                      por \"<\" el nombre del fichero que quiere leer. Deberá quedar:\n"
              << "                     " << argv[0] << " Fichero salida.txt < entrada.txt\n";
    return false;
  }
  if (argc > 3) {
    std::cout << "Ha utilizado un número incorrecto de parámetros\n";
    std::cout << argv[0] << " -- Grafo Válido" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " <Tipo_de_Entrada> <Fichero_de_Salida> < <Fichero_de_Entrada>\n";
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    return false;
  }
  return true;
}

int main(const int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }
  Graph user_graph{};
  std::string input_option{argv[1]};
  std::string output_option{argv[2]};
  if (input_option == "Teclado") {
    std::cin >> user_graph;
  }
  else {
    if (input_option == "Fichero") {
      std::cin >> user_graph;
    }
  }
  if (output_option == "Pantalla") {
    std::cout << user_graph << std::endl;
  }
  else {
    Write(argv[2], user_graph);
  }
  return 0;
}

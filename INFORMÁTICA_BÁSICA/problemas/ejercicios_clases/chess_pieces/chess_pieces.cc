/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author Steven Abolaji Ibidokun
 * @date Dec 06, 2024
 * @brief El programa instancia un número de piezas de ajedrez dado por el usuario
 *        y les asigna un tipo, color y posición en el tablero de manera aleatoria.
 *        En caso de  que hayan dos piezas en la misma posición, se reposicionan todas.
 * @bug There are no known bugs
 */

#include "chess_piece.h"

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
    std::cout << argv[0] << " -- Piezas de Ajedrez Aleatorias" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " <numero_de_piezas>\n";
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    return false;
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << argv[0] << " -- Piezas de Ajedrez Aleatorias " << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " <numero_de_piezas>\n";
    std::cout << "numero_de_piezas:       Número de piezas a instanciar\n";
    return false;
  }
  if (argc != 2) {
    std::cout << "Ha utilizado un número incorrecto de parámetros\n";
    std::cout << argv[0] << " -- Piezas de Ajedrez Aleatorias" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " <numero_de_piezas>\n";
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    return false;
  }
  return true;
}

int main(const int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }
  const int kNumberOfPieces{std::stoi(argv[1])};
  std::vector<ChessPiece> chess_pieces;
  chess_pieces = GenerateAVectorOfRandomChessPieces(kNumberOfPieces);
  while (CheckIfTwoPiecesAreInTheSamePosition(chess_pieces)) {
    chess_pieces = ChangeThePositionOfThePieces(chess_pieces);
    for (const ChessPiece& chess_piece : chess_pieces) {
      std::cout << chess_piece;
    }
  }
  std::cout << "All the pieces are in different positions." << std::endl;
  return 0;
}
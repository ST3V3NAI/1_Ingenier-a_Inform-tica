/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author Steven Abolaji Ibidokun
 * @date Dec 6, 2024
 * @brief El programa instancia un número de piezas de ajedrez dado por el usuario
 *        y les asigna un tipo, color y posición en el tablero de manera aleatoria.
 *        En caso de  que hayan dos piezas en la misma posición, se reposicionan todas.
 * @bug There are no known bugs
 */

#include "chess_piece.h"

/**
 * @brief La función genera un número aleatorio y muestra la cadena de texto correspondiente a dicho número
 * 
 * @return Cadena de texto del vector que contiene los tipos de piezas del ajedrez.
*/
std::string ChooseRandomPieceType() {
 int random_index{0 + std::rand() % 6};
 std::vector<std::string> types_of_pieces{"king", "queen", "bishop", "rook", "knight", "pawn"};
 return types_of_pieces[random_index];
}
/**
 * @brief La función genera un número aleatorio y devuelve el color asociado a él
 * 
 * @return "white" o "black" en función del número generado.
*/
std::string ChooseRandomColor() {
  int random_index{0 + std::rand() % 2};
  std::vector<std::string> piece_colors{"white", "black"};
  return piece_colors[random_index];
}

/**
 * @brief La función genera un par de números enteros aleatorio.
 * 
 * @return Un par(std::pair) de números aleatorios 
*/
std::pair<int, int> ChooseRandomPosition() {
  int random_number{1 + std::rand() % 8};
  std::pair<int, int> random_position;
  random_position.first = random_number;
  random_position.first = random_number;
  random_number = 1 + std::rand() % 8;
  random_position.second = random_number;
  return random_position;
}

/**
 * @brief Define cómo se debe mostrar en pantalla el objeto "ChessPiece"
 * 
 * @param[in] out Flujo de salida
 * @param[in] chess_piece. Pieza de ajedrez cuya información se va a mostrar
 * 
 * @return Muestra en pantalla la información de una pieza de ajedrez
*/
std::ostream& operator<<(std::ostream& out, const ChessPiece& chess_piece) {
  out << chess_piece.tipo() << " " << chess_piece.color() << ", row=" 
      << chess_piece.position_first() << ", column= " << chess_piece.position_second() << std::endl;
  return out;
}

/**
 * @brief La función crea un vector de piezas de ajedrez cuyos atributos son aleatorios.
 * 
 * @param[in] kNumberOfPieces. Número de piezas que conformarán el vector.
 * @return Vector formado por piezas de ajedrez con atributos aleatorios.
*/
std::vector<ChessPiece> GenerateAVectorOfRandomChessPieces(const int KNumberOfPieces) {
  std::vector<ChessPiece> chess_pieces;
  for (int counter{0}; counter < KNumberOfPieces; ++counter) {
    std::srand(std::time(0) + counter);
    std::string new_type{ChooseRandomPieceType()};
    std::string new_color{ChooseRandomColor()};
    std::pair<int, int> new_position{ChooseRandomPosition()};
    ChessPiece new_piece(new_type, new_color, new_position);
    chess_pieces.emplace_back(new_piece);
    std::cout << new_piece; 
  }
  return chess_pieces;
}

/**
 * @brief La función comprueba si hay dos piezas de ajedrez que se encuentren en la misma posición
 *        En esta función podemos ver que hay una línea comentada. Se trata de una funcionalidad adicional
 *        que muestra cuales son las líneas en las que encontraremos las piezas que están en la
 *        misma posición. (Se encuentra comentada porque no se pedía para la resolucion del problema.)
 * 
 * @param[in] chess_pieces. Vector que contiene las piezas que se van a comparar
 * @return Verdadero si hay dos piezas que ocupan la misma posición en el tablero
 *         Falso si no hay piezas que compartan la misma posición.
 * 
*/
bool CheckIfTwoPiecesAreInTheSamePosition(const std::vector<ChessPiece>& chess_pieces) {
  for (size_t first_counter{0}; first_counter < chess_pieces.size(); ++first_counter) {
    for (size_t second_counter{1}; second_counter < chess_pieces.size(); ++second_counter) {
      if (first_counter != second_counter) {
        if (chess_pieces[first_counter].position_first() == chess_pieces[second_counter].position_first() && 
            chess_pieces[first_counter].position_second() == chess_pieces[second_counter].position_second()) {
          //std::cout << first_counter + 1 << " es " << second_counter + 1 << std::endl;
          std::cout << "Several pieces are in the same position. We are going to relocate them:\n";
          return true;
        }
      }
    }
  }
  return false;
}

/**
 * @brief La función cambia la posición de las piezas de ajedrez de un vector
 * 
 * @param[in] chess_pieces. Vector que contiene todas las piezas que se van a mover de posición
 * @return Vector con las piezas de ajedrez en una nueva posición.
*/
std::vector<ChessPiece> ChangeThePositionOfThePieces(std::vector<ChessPiece>& chess_pieces) {
  for (ChessPiece& piece : chess_pieces) {
    piece.SetPosition({1 + std::rand() % 8, 1 + std::rand() % 8});
  }
  return chess_pieces;
}
/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author Steven Abolaji Ibidokun
 * @date Dec 6, 2024
 * @brief El programa instancia un número de piezas de ajedrez dado por el usuario
 *        y les asigna un tipo, color y posición en el tablero de manera aleatoria.
 *        En caso de  que hayan dos piezas en la misma posición, se reposicionan todas.
 * @bug There are no known bugs
 */

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  // Para std::stoi
#include <ctime>  // Para std::time

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

/**
 * @class ChessPiece
 * @brief Clase que representa una pieza de ajedrez
 *        Para ello se tiene en cuenta el tipo de pieza, su color y posición.
*/
class ChessPiece {
 public:
  ChessPiece() = default;
  ChessPiece(const std::string& tipo, const std::string& color, const std::pair<int, int>& position) : tipo_ {tipo}, color_ {color}, position_ {position} {}
  const std::string& tipo() const { return tipo_; }
  const std::string& color() const { return color_; }
  const int position_first() const { return position_.first; }
  const int position_second() const { return position_.second; }
  void SetPosition(const std::pair<int, int>& new_position) { position_ = new_position; }
 private:
  std::string tipo_{};
  std::string color_{};
  std::pair<int, int> position_{};
};

std::string ChooseRandomPieceType(); 
std::string ChooseRandomColor();
std::pair<int, int> ChooseRandomPosition();
std::ostream& operator<<(std::ostream& out, const ChessPiece& chess_piece);
std::vector<ChessPiece> GenerateAVectorOfRandomChessPieces(const int KNumberOfPieces);
bool CheckIfTwoPiecesAreInTheSamePosition(const std::vector<ChessPiece>& chess_pieces);
std::vector<ChessPiece> ChangeThePositionOfThePieces(std::vector<ChessPiece>& chess_pieces);

#endif
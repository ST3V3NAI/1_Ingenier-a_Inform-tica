/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file shape.cc
 * @author Steven
 * @date 2024-12-10
 * @brief This program contains the definition of the Methods used in the class shapes.h
 * @bug There are no known bugs
 */


#include "shape.h"

/** Insertion Operator of the output stream
 * @param[in] out Output stream
 * @param[in] shape Shape we are goint to display
 * @return Output stream
 */
std::ostream& operator<<(std::ostream& out, const Shape& shape) {
  return out << shape.graphic_ << " " << shape.area_;
}


/** Comparison oeprator of the figures
 * @param[in] left Left Operand
 * @param[in] right Right Operand
 * @return True if the generated area is on the left oeprand,
 * return False
 */
bool operator<(const Shape& left, const Shape& right) {
    return left.area() < right.area();
}
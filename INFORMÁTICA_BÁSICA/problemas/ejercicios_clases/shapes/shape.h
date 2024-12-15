/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file shape.h
 * @author Steven
 * @date 2024-12-10
 * @brief This the definition of the class we going to use to shape.cc
 * @bug There are no known bugs
 */

#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <cmath>
#include <iostream>

/** Clase de represnetacióm de figuras geométricas */
class Shape {
  public: 
    /** Constructor of the class Shape */
    Shape(const std::string graphic, double area) : graphic_{ graphic }, area_{ area } {}
    double area() const { return area_; }
    friend std::ostream& operator<<(std::ostream& out, const Shape& shape);
  private: 
    std::string graphic_;
    double area_;
};

bool operator<(const Shape& left, const Shape right); 

#endif // SHAPE_H
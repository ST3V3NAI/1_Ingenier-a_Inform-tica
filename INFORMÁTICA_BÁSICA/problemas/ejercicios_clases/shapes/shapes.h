/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file shapes.h
 * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
 * @date 2024-12-10
 * @brief This the definition of the class we going to use to shapes.cc
 * @bug There are no known bugs
*/

#ifndef SHAPES_H
#define SHAPES_H

#include "shape.h"

/** Clase de representación de cuadrado */
class Square : public Shape {
  public: 
    Square(double side = 1.0) : Shape{"[]", side + side} {}
};

/** Clase de representación de círculo */
class Circle : public Shape {
  public: 
    Circle(double radius = 1.0) : Shape{"[]", M_PI * radius * radius} {}
};

/** Clase de represnetación de triángulo */
class Triangle : public Shape {
  public:
    Triangle(double base = 1.0, double height = 1.0) : Shape{"/()", 0.5 * base * height} {}
};


#endif // SHAPES_H
/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file point_2d.h
 * @author Steven
 * @date 2025-03-30
 * @brief Declaración de la clase Point2D
 * @bug There are no known bugs
 */

#ifndef POINT_2D_H
#define POINT_2D_H

#include <iostream> // Para lujos de entrada y salida
#include <cmath> // Para operaciones matemáticas complicadas

void Usage(int argc, char *argv[]); 

class Point2D {
  public: 
    // Constructor parametrizado
    Point2D(double x, double y) : coordinate_x_{x}, coordinate_y_{y} {}
    // Destructor
    ~Point2D() {}
    void Show() const {
      std::cout << "Tu vector inicial es: ( " << coordinate_x_ << ", " << coordinate_y_ << " )" << std::endl; 
    }

    void Move(double new_coordinate_x, double new_coordinate_y) const;  
    void MiddlePoint(double new_coordinate_x, double new_coordinate_y) const; 

  private: 
    double coordinate_x_, coordinate_y_;
}; 



#endif // POINT_2D_H
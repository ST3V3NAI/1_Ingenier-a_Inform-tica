/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file triangle_area.cc
 * @author Steven
 * @date 2025-03-16
 * @brief Implementación de la función triangle-area
 * @bug There are no known bugs
 */

#include "triangle_area.h" 

double IsValidTriangle(double side_a, double side_b, double side_c){
  if(side_a + side_b > side_c && side_b + side_c  > side_a && side_c + side_a > side_b){
    double result_s = (0.5) * (side_a + side_b + side_c);
    double area = sqrt((result_s) * (result_s - side_a) * (result_s -side_b) * (result_s -side_c));
    return area;
   } else {
    std::cout << "Is not a Valid Triangle" << std::endl;
    return 1;
   }
}
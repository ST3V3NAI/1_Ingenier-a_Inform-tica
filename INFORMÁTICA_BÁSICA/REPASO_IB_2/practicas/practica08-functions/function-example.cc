/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file function-example.cc
 * @author Steven
 * @date 2025-03-15
 * @brief Este programa realiza un cáculo matemático
 * @bug There are no known bugs
*/

#include <iostream>
#include <cmath> // Para std::sqr

double FunctionExample(double x, double y, double t);

int main() {
  int x, y, t;

  std::cin >> x >> y >> t;
  std::cout << FunctionExample(x, y, t);
}





double FunctionExample(double x, double y, double t) {
   double denom = (pow(x, 2) - pow(y, 2));
   double num = (sqrt((2 * t) - 4));

   return (num / denom);
}
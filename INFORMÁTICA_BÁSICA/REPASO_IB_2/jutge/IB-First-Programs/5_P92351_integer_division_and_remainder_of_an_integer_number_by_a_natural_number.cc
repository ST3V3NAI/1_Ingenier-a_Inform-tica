/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 5_P92351_integer_division_and_remainder_of_an_integer_number_by_a_natural_number.cc
 * @author Steven
 * @date 2025-02-10
 * @brief This program reads an integer number a and a natural number b, with b > 0, and 
 * prints the integer division d and the remainder r of a divided by b.
 * @bug There are no known bugs
 */

#include <iostream>

int main() {
  int number_a{0}, divisor{0}, division{0}, remainder{0};

  std::cin >> number_a >> divisor;

  if(divisor > 0) {
    division = number_a / divisor;
    remainder = number_a - division * divisor;
  
  if(remainder < 0) {
    remainder += divisor;
    division -= 1; 
  
    std::cout << division << " " << remainder << std::endl;
  
  } else {
    std::cout << "The divisor is negative" << std::endl;
  }
  return 0;
}
/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 3_P33839_sum_of_digits.cc
 * @author Steven
 * @date 2025-03-01
 * @brief Write a program that reads several numbers and prints the sum of the digits of each one.
 * @bug There are no known bugs
*/

#include <iostream>
#include <string>

int main() {
  int number{0}, number_1; 
  
  while (std::cin >> number) {
    number_1 = number;
    int suma{0};
      do {suma += number % 10;
      number /= 10; }

      while(number > 0);
    std::cout << "The sum of the digits of " << number_1 << " is " << suma << ". " << std::endl;
      
      }
  }


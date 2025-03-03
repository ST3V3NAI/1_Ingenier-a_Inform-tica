/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 7_P80660_the_sequence_of_collatz.cc
 * @author Steven
 * @date 2025-03-01
 * @brief Write a program that do the sequence of colatz
 * @bug There are no known bugs
*/


#include <iostream>

int main() {
  int number{0};
  int i{0};

  while(std::cin >> number) {
    if(number <= 1) {
      number = 0; 
      std::cout << number << std::endl;
    } else {
      do {
        if(number % 2 == 0) {
          number /= 2; 
        } else {
          number = (number * 3) + 1;  
        }
        i++;
      } while (number > 1);
        std::cout << i << std::endl;
    }
    return 0;
  }
}


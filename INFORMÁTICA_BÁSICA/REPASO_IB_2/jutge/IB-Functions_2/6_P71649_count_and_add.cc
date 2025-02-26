/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 6_P71649_count_and_add.cc
 * @author Steven
 * @date 2025-02-23
 * @brief Write a procedure to read a sequence of integer numbers 
 * until its end, and store in num how many numbers it has, and 
 * store in sum the sum of those numbers. For instance, if the 
 * input sequence is
 * @bug There are no known bugs
*/

#include <iostream>

void count_and_add(int& num, int& sum) {
  int input;
  num = 0;
  sum = 0; 

  while(std::cin >> num) { 
      num++;
      sum += input; 
  } 
}

int main() {
  int num, sum; 

  count_and_add(num, sum);

  std::cout << "Numbers: " << num << std::endl;
  std::cout << "Sum: " << sum << std::endl; 

  return 0; 
}
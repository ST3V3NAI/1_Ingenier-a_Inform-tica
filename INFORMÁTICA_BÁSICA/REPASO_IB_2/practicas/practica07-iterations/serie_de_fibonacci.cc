/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file serie_de_fibonacci.cc
 * @author Steven
 * @date 2025-03-15
 * @brief Desarrolle un programa que imprima los N primeros términos
 * de la serie de Fibonacci
 * @bug There are no known bugs
*/

#include <iostream>

void SerieDeFibonacci(int num);

int main() {
  int num;

  std::cin >> num; 
  SerieDeFibonacci(num);
}



void SerieDeFibonacci(int num) {
  int t1{0}, t2{1}, next_t{0};

  std::cout << t1 << " " << t2 << " "; 
  for(int i = 1; i <= num; i++) {
    next_t = t1 + t2;
    t1 = t2;
    t2 = next_t; 
    std::cout << next_t << " "; 
  } 
}
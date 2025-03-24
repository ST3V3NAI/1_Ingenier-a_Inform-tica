/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 1_P75149_looking_for_and_a.cc
 * @author Steven
 * @date 2025-03-23
 * @brief Program that reads a sequence of characters enden in a dot and tells if the sequence has any lowercase 'a'
 * @bug There are no known bugs
*/

#include <iostream>
#include <string>

int main() {
  std::string phrase; 
  int contador_a{0};

  std::getline(std::cin, phrase); 

  for(char& i : phrase) {
    if(i == 'a') {
      contador_a++;
    }
  }

  if(contador_a >= 1) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }

  return 0; 
}
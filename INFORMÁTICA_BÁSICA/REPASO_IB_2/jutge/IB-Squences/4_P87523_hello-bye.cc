/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 4_P87523_hello-bye.cc
 * @author Steven
 * @date 2025-03-23
 * @brief This program after a sequence of strings, tells u hello, if the string containts that word or by otherwhise
 * @bug There are no known bugs
*/

#include <iostream>
#include <string>

int main() {
  std::string word;
  std::string palabraBuscada = "hello";

  std::getline(std::cin, word);

  if(word.find(palabraBuscada) != std::string::npos) {
    std::cout << "hello" << std::endl;
  } else {
    std::cout << "bye" << std::endl; 
  }

  
}
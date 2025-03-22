/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file desinflado.cc
 * @author Steven
 * @date 2025-03-15
 * @brief Programa que lee una letra en mayúscula y muestre por pantalla su letra en minúsulca
 * @bug There are no known bugs
*/

#include <iostream>
#include <string>
#include <cctype> // Para toupper y tolower

char Desinflado(char& letra);

int main() {
  char letter; 

  std::cin >> letter;

  std::cout << Desinflado(letter); 
  
}

char Desinflado(char& letra) {
  if(toupper(letra) == letra) {
    letra = tolower(letra);
  }
  return letra; 
}
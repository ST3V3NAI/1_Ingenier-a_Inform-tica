/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file suma_de_numero_natural.cc
 * @author Steven
 * @date 2025-03-15
 * @brief Programa que lee un número naturañ e imprime la suma
 * @bug There are no known bugs
*/

#include <iostream>

int SumaDeEntero(int num);

int main() {
  int numero; 

  std::cin >> numero;
  std::cout << SumaDeEntero(numero);

}

int SumaDeEntero(int num) {
  int suma{0};
  int residuo_num{0};

  while(num != 0) {
    residuo_num = num % 10; 
    num /= 10; 
    suma = suma + residuo_num;
  }

  return suma; 
}
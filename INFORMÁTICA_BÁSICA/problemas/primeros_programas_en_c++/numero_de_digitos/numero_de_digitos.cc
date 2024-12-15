/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file numero_de_digitoscc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>

int main(){
    int numero{0};
    std::cin >> numero;
    std::cout << std::floor(std::log10(numero) + 1) << std::endl;
    return 0;
}

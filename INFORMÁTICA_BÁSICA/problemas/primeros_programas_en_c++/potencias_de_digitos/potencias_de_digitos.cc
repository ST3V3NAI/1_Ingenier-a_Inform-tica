/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file potenica_de_digitos.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 22 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>

int main(){
    int numero{0};

    std::cout << "Introduzca un número: ";
    std::cin >> numero; 

    int elevado{0};

    for(int i = 1; i <= numero; i++){
        elevado = pow(2, i);
        std::cout << elevado << " " << std::endl;
    }
}
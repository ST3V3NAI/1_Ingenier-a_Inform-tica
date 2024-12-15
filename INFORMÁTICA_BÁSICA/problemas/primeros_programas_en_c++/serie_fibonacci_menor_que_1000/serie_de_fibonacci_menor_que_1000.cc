/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file serie_de_fibonacci.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main(){

  int numero, t1 = 0, t2 = 1, siguienteTermino;
  
  std::cin >> numero;

  std::cout << "Serie de Fibonacci " << t1 << ", " << t2;

  for(int i=1; i <= numero; i++){
    siguienteTermino = t1 + t2;
    std::cout << " , " << siguienteTermino;

    t1 = t2;
    t2 = siguienteTermino; 
  }

    std::cout << std::endl;

  return 0;
}
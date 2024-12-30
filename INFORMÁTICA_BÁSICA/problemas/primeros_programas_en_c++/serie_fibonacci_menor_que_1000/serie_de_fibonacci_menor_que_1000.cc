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

const int kRestriccion{1000};

int main(){

  int termino_1{0}, termino_2{1}, siguiente_termino{0}, suma_pares{0};

  std::cout << "Serie de Fibonacci " << termino_1 << ", " << termino_2;

  while(siguiente_termino <= kRestriccion){
    siguiente_termino = termino_1 + termino_2;
    
    if (siguiente_termino > kRestriccion) break;

    std::cout << ", " << siguiente_termino;

    if(siguiente_termino % 2 == 0) {
      suma_pares += siguiente_termino;
    }

    termino_1 = termino_2;
    termino_2 = siguiente_termino; 
  }

    std::cout << std::endl;
    std::cout << suma_pares << std::endl;

  return 0;
}
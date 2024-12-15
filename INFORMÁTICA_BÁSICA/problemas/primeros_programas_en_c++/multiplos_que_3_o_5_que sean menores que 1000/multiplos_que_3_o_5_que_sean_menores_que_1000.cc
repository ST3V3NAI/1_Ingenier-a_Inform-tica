/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file multiplos_que_3_o_5_sean_meanores_que_1000.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 22 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

const int kMaximo{1000};

bool Multiplo35(int valor) {
  return (valor % 3 == 0 || valor % 5 == 0);
}

int Sumatorio(int suma){
  int sumatorio{0};
   for(int i = 1; i < kMaximo; i++){
    if (Multiplo35(i)){
        sumatorio =  sumatorio + i;
    }
   }
     return sumatorio;
}


int main(){
  int numero{};

  std::cout << Sumatorio(numero) << std::endl;

  return 0;
}

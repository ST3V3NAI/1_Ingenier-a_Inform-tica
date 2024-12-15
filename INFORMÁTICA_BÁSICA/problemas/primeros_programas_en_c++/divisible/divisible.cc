/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file divisible.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */


#include <iostream>

int main(){
  int numero{0};

  std::cout << "Introduzca un número: ";
  std::cin >> numero; 

  for(int i = 1; i <= numero; i++){
    if((numero % i) == 0){
        std::cout << i << " ";

    }else{
        std::cout << ""; 
    }
  } 
  

  return 0; 
} 
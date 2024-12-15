/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file factorial.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 22 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int Factorial(int numero){
/*  int factorial{1};
  for(int i{2}; i <= numero; i++){
  factorial = factorial * i;
 }
  return factorial;
*/
  if (numero <= 0){
  return 1;
  } else {
    return numero * Factorial(numero - 1);
  }
}

void mostrarFactorial(int numero){
  for(int i{1}; i <= numero; i++){
    std::cout << Factorial << ' ';
  }
  std::cout << "\b\n";
}

int main(){
 int numero{0};

 std::cout << "Dime el numero: ";
 std::cin >> numero;

 mostrarFactorial(numero);

  return 0;
}




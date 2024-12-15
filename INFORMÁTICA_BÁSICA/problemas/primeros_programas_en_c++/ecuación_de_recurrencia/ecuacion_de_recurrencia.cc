/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file ecuación_de_recurrencia.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

int main(){
 int suma{0}, numero{0};

 std::cout << "Dime el numero: ";
 std::cin >> numero;

 for(int i = 1; i <= numero; i++){
  suma += ((numero * (numero + 1)) / 2);
 }

 suma = suma / numero; 

  std::cout << suma << std::endl; 

  return 0;
}
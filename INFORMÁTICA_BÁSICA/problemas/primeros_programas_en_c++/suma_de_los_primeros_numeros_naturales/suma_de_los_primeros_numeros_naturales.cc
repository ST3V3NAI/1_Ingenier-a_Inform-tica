/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file suma_de_los_primeros_numeros_naturales.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

int SumaDeTresNumero(int numero, int suma){
  for(int i = 1; i <= numero; i++){
  suma += numero;
  numero++;

  std::cout << suma << std::endl;

  return suma;
 }
}

int main(){
 int suma{0}, numero{0};

 std::cout << "Dime el numero: ";
 std::cin >> numero;

  std::cout << SumaDeTresNumero(numero, suma) << std::endl; 

  return 0;
}
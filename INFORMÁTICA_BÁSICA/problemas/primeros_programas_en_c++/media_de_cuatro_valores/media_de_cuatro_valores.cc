/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file media_de_cuatro_valores.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

 int main(){
  double valor_1{0}, valor_2{0}, valor_3{0}, valor_4{0};

  std::cout << "Primer valor: ";
  std::cin >> valor_1;
  std::cout << "Segundo valor: ";
  std::cin >> valor_2;
  std::cout << "Tercero valor: ";
  std::cin >> valor_3;
  std::cout << "Cuarto valor: ";
  std::cin >> valor_4;

  double promedio{0};

  promedio = (valor_1 + valor_2 + valor_3 + valor_4 ) / 4.0;

  //double media((valor1 + valor+2 + valor 3 + valor 4) *0.25)

  std::cout << "El promedio es: " << promedio << std::endl;

 }
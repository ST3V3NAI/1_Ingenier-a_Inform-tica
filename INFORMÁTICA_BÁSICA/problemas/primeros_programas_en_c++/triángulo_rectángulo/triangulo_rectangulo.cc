/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file triangulo_rectangulo.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>
 #include <cmath>

int main(){
  double cateto_a,cateto_b;

  std::cout << "Introduzca cateto a: ";
  std::cin >> cateto_a;
  std::cout << "Introduzca cateto b: "; 
  std::cin >> cateto_b;

  double hipotenusa{0};

  hipotenusa = sqrt((cateto_a*cateto_a)+(cateto_b+cateto_b));

  std::cout << "El valor del hipotenusa es: " << hipotenusa << std::endl;

  return 0;
  
 }
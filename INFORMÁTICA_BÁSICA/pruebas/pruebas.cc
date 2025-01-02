#include <iostream>
#include <cmath>

int main () {
  int lado_1{0}, lado_2{0}, lado_3{0};

  std::cout << "Introduzca lado1: ";
  std::cin >> lado_1;
  std::cout << "Introduzca lado2: ";
  std::cin >> lado_2;
  std::cout << "Introduzca lado3: ";
  std::cin >> lado_3;

  if(lado_1 == lado_2 && lado_1 == lado_3) {
    std::cout << "El triangulo es equilatero" << std::endl;
  } else if (lado_1 < lado_2 && lado_1 < lado_3 && lado_2 == lado_3) {
    std::cout << "El triangulo es isosceles" << std::endl;
  } else if (lado_1 < lado_2 && lado_1 < lado_3 && lado_1 =! lado_2 && lado_1 =! lado_3) {
    std::cout << "El triangulo es escaleno" << std::endl;                     
  } else {
    std::cout << "No es un triangulo valido" << std::endl;
  }  

  return 0;
}
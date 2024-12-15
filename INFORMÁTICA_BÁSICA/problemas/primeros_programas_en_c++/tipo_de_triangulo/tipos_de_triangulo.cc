/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file tipos_de_triangulo.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

 int main(){
    float lado1{0};
    float lado2{0};
    float lado3{0};

    std::cout << "Introduzca lado1: ";
    std::cin >> lado1;
    std::cout << "Introduzca lado2: ";
    std::cin >> lado2;
    std::cout << "Introduzca lado3:";
    std::cin >> lado3;


    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {

        if (lado1 == lado2 && lado1 == lado3) {
            std::cout << "El triangulo es equilatero" << std::endl;
        }

        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            std::cout << "El triangulo es isosceles" << std::endl;
        }

        else {
            std::cout << "El triangulo es escaleno" << std::endl;
        }
    } else {
        std::cout << "No es un triangulo valido" << std::endl;
    }

    return 0;
 
}
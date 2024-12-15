/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file perimetro_y_area.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

 int main(){
    float radio{0};
    float perimetro{0};
    float area{0};

    std::cout << "Introduzca el radio: ";
    std::cin >> radio;

    perimetro = 2.00 * 3.1416 * radio;
    area = 3.1416 * radio * radio;


    std::cout << "Perimetro: " << perimetro << std::endl;
    std::cout << "Área: " << area << std::endl;

    return 0;
 }
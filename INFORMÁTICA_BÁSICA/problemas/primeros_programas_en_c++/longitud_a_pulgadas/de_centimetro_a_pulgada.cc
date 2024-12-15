/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file de_cm_a_pulgada.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

 int main(){
    double longitud{0};


    std::cout << "Introduzca longitud: ";
    std::cin >> longitud;

    double equivalencia;

    equivalencia = longitud * 2.54;

    std::cout << longitud << " cm = " << equivalencia << " in" << std::endl;

    return 0;
 }
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file cantidad_de_numeros_y_numeros_al_reves.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

  #include <iostream>

 int main(){
    int numero{0}, numeroInvertido = 0, cantidad_de_numeros = 0;

    std::cout << "Introduzca la cantidad y los numeros: ";
    std::cin >> cantidad_de_numeros >> numero;

    while(numero != 0){
        int digito = numero % 10;

        numeroInvertido = numeroInvertido * 10 + digito;

        numero /= 10;    
    }

    std::cout << numeroInvertido << std::endl;

    return 0;
 }
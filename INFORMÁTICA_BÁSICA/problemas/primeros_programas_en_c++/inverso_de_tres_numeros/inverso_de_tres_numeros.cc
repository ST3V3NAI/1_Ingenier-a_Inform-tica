/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file inverso_de_tres_numeros.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

 int main(){
    int numero{0}, numeroInvertido{0};

    std::cout << "Introduzca un numero: ";
    std::cin >> numero;

    while(numero != 0){
        int digito = numero % 10;

        numeroInvertido = numeroInvertido * 10 + digito;

        // numeroInvertido = numeroInvertido * 10 + (numero % 10);
        // numero /= 10; 

        numero /= 10;    
    }

    std::cout << numeroInvertido << std::endl;

    return 0;
 }
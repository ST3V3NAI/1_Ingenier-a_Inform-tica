/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file maximo_comun_divisor.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int GreatestCommonDivisor(int a, int b){
    while(a != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }

     return b;
}

 int main(){
    int numero_a{0}, numero_b{0};

    std::cin >> numero_a >> numero_b;

  /*
        // Validar si los números son no negativos
    if (numero_a < 0 || numero_b < 0) {
        std::cout << "Por favor, ingrese números no negativos." << std::endl;
        return 1;  // Salida con error
    }

    // Manejar el caso en que ambos números son cero
    if (numero_a == 0 && numero_b == 0) {
        std::cout << "El GCD no está definido para (0, 0)." << std::endl;
        return 1;  // Salida con error
    }
    */

    int resultado = GreatestCommonDivisor(numero_a, numero_b);

    std::cout << "El maximo común divisor es: " << resultado << std::endl;  

    return 0;
 }


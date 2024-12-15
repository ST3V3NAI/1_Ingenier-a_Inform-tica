/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file Ejercicios 14 y 15 unidos
  * @author Aceituno 
  * @date Oct 22 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int Sumar1(int maximo){
    int sumatorio{0};
    for (int i{1}; i <= maximo; i++){
        sumatorio += i;
    }

    return sumatorio;
}

int Sumar2(int maximo){
    return maximo * (maximo + 1) / 2; 
}



int main(){
    int valor{0};
    std::cin >> valor;

    std::cout << Sumar1(valor) << ' ' << Sumar2(valor) << std::endl; 

}
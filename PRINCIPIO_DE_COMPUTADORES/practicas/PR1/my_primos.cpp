/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file my_primos.cpp
 * @author Steven
 * @date 2025-02-14
 * @brief Programa que calcula los numeros primos (números naturales mayor que uno que tienen únicamenye dos divisores positivos:
 * él mismo, y uno) que se encuentren en un rango [a, b] que el usuario facilitará por la consola
 * @bug There are no known bugs
 */

#include <iostream>

int main() {
  int limite_inferior{0}, limite_superior{0}, parameter_i, parameter_j;
  bool esPrimo; 

  std::cout << "PR1. Principios de Computadores. \n"
            << "\n"
            << "Un numero primo es un número natural mayor que 1 que es divisible \n"
            << "unicamente entre 1 y el mismo. Esye programa descubre los \n"
            << "numero primos en un rango de numeros naturales [a, b] siendo \n "
            << "a y b naturales mayores que 1. El programa debera comprobar \n"
            << "que se cumpla ademas que b es mayor o igual que a y que son \n"
            << "menores que 1001 para que ejecute en tiempo razonable. \n"
            << "\n";

    while (true) {
        std::cout << "Introduce el limite inferior [a]: "; 
        std::cin >> limite_inferior; 
        if(limite_inferior < 2 || limite_inferior > 1000) {
            std::cout << "Error, vuelve a introducir el rango." << std::endl; 
            continue; 
         }
        std::cout << "Introduce el límite superior [b]: ";
        std::cin >> limite_superior; 
        if(limite_superior < 2 || limite_superior < limite_inferior || limite_superior > 1000) {
            std::cout << "Error, vuelve a introducir el rango. " << std::endl;
            continue; 
        }
        break;
    }

    for(parameter_i = limite_inferior; limite_inferior < limite_superior; parameter_i++) {
        esPrimo = true; 
        for(parameter_j = 2; parameter_j < parameter_i; parameter_j++) {
            if(parameter_i % parameter_j == 0) {
              esPrimo = false; 
              break; 
            }
        }
        if(esPrimo) {
            std::cout << parameter_i; 
            std::cout << " "; 
        }
    }
    std::cout << "Fin del programa.\n"; 
    return 0;
}


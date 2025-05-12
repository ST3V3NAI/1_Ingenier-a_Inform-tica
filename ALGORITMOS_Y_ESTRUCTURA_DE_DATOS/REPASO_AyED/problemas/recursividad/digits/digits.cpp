// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-03
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// Todas las funciones recursivas para probar
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <cmath>
#include <iostream>

/**
 * @brief Función que calcula el número de digitos que tiene 
 * un número
 * @param[in] number El número que al que vamos a contar los digitos
 * @return unsigned int Número de digitos
 */
unsigned int calculateDigits(const unsigned int number) {
  return (number > 0)? 1 + calculateDigits(number / 10) : 0;
}

/**
 * @brief Función que suma los digitos de un número entero positivo
 * @param[in] number El número al calculamos la suma de lso digitos
 * @return unsigned int suma de los digitos
 */
unsigned int sumOfDigits(const unsigned int number) {
  return (number > 0)? (number % 10) + sumOfDigits(number / 10) : 0;
}

int main() {
  int number{0};


  std::cout << "Introduzcame un número: ";
  std::cin >> number;
  std::cout << std::endl; 


  std::cout << number << " tiene esta cantidad de dígitos: " << calculateDigits(number) << std::endl;
  std::cout << "La suma de los dígitos de " << number << " es: " << sumOfDigits(number);

}
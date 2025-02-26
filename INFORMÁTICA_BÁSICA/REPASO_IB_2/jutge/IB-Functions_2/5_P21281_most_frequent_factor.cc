/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 5_P21281_most_frequent_factor.cc
 * @author Steven
 * @date 2025-02-23
 * @brief Write a procedure to store in f the most 
 * frequent factor of n, and store in q how many times 
 * it appears. If there is a tie, choose the smallest factor. For instance, if called with n = 450 = 21 · 32 · 52, the values after the call must be f =3 and q = 2.
 * @bug There are no known bugs
 */

 #include <iostream>

 void factor(int n, int& f, int&q){
 // Esta función analiza el valor introducido, y te lo descompone en factores primos
   int i{2};
   q = 1;
   f = n;
   while (i * i <= n) {
     int j{0};
     while (n % i == 0 and n != 0) {
       ++j;
       n /= i;
     }
     if (j > q || (j == q && f > i)) {
       q = j;
       f = i;
     }
     ++i;
   }
 }
 
 int main(){
   int number_n{}, frecuence{}, quantity{}; // Inicializamos valores en 0
 
   std::cin >> number_n;   //  Pedimos valores al usuario
 
   factor(number_n, frecuence, quantity); // Definición de la función factor
 
   std::cout << "factor(" << number_n << ") --> " << frecuence << " " << quantity; // Mostramos el resultado por pantalla
 
   return 0; // El programa se ejecutó sin problemas
 
 }
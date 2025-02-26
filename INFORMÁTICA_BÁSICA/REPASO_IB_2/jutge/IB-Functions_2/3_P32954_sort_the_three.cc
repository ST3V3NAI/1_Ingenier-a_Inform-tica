/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 3_P32954_sort_the_three.cc
 * @author Steven
 * @date 2025-02-23
 * @brief Write a procedure to sort a, b and c 
 * in nondecreasing order. For instance, if called 
 * with a =7, b = −3 and c = 1, the values after the call 
 * must be a =−3, b = 1 and c = 7.
 * @bug There are no known bugs
*/

#include <iostream>
#include <algorithm>

void sort3(int& a, int&b, int&c){
  if(a > b){
     std::swap(a,b);
  } if (a > c){
      std::swap(a,c);
  } if (b > c){
      std::swap(b, c);
  }
}
/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 6_P11725_sequential_search_in_an_array.cc
 * @author Steven
 * @date 2025-02-22
 * @brief Write a function that tells if the integer
 *  number x is present in the vector of integer numbers v.
 * @bug There are no known bugs
*/

#include <iostream>
#include <vector>
using namespace std;

bool exists(int x, const vector<int>& v) {
  for(int i = 0; i < v.size(); i++) {
    if(v[i] == x) {
      return true; 
    }
  }
  return false; 
}

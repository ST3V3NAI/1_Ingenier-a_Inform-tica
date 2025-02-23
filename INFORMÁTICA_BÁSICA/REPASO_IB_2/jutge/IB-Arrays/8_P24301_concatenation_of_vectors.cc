/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 8_P24301_concatenation_of_vectors.cc
 * @author Steven
 * @date 2025-02-22
 * @brief Write a function that returns the concatenation of v1 and v2. 
 * That is, you must return a vector with the elements of v1 followed by the elements of v2.
 * @bug There are no known bugs
*/

#include <iostream>
#include <vector>
using namespace std; 

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
  std::vector<int> v3{v1};
  for(int i = 0; i < v2.size(); i++) {
    v3.emplace_back(v2[i]);
  }
  return v3; 
}
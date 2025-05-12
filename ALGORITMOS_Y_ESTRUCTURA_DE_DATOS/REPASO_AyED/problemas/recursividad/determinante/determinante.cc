// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-10
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Calcular el determinante de una matriz
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include "matrix_t.hpp"

using namespace std;

template<class T> 
T det(const matrix_t<T> &mat) {
	if(mat.get_m() == 1) return mat(1,1);
	T sum = 0;
	matrix_t<T> submat(mat.get_m() - 1, mat.get_n() -1);
	for(int col = 1; col <= mat.get_m(); col++) {
		for(int i = 1; i <= submat.get_m(); i++) {
			for(int j = 1; j <= submat.get_n(); j++) {
				submat(i, j) = mat(i + 1, j < col? j : j + 1);
      }
		}
    sum += (col % 2 == 1? 1.0 : -1.0) * mat(1, col) * det(submat); 
	}
  return sum;
}

int main() {
  matrix_t<int> mat(2, 2);
  mat(1, 1) = 2; mat(1, 2) = 3;
  mat(2, 1) = 2; mat(2, 2) = 3;
  
  int result = det(mat);

  std::cout << result << std::endl;

  return 0;
}
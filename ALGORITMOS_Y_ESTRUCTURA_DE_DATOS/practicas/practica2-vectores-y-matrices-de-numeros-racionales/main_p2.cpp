// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html
// COMPILACIÓN: g++ -g rational_t.cpp main_p2.cpp -o main_p2

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include <iostream>
#include <cmath>
#include <vector>

// pauta de estilo [41]: ficheros de cabecera agrupados y separados
#include "rational_t.hpp"
#include "vector_t.hpp"
#include "matrix_t.hpp"

using namespace std;

//bool is_capicua(const std::vector<int>& vec) {
//  int n = vec.size();
//  for (int i = 0; i < n / 2; ++i) {
//    if (vec[i] != vec[n - i - 1]) {
//      return false;
//    }
//  }
//  return true;
//}

int main()
{
  rational_t a(1, 2), b(3);
//  std::vector<int> p{1, 3, 5, 3, 1}; 

  // FASE I
  cout << "a + b: ";
  (a+b).write();

  cout << "b - a: ";
  (b-a).write();

  cout << "a * b: ";
  (a*b).write();
  
  cout << "a / b: ";
  (a/b).write();
  
  cout << endl;
  
  // FASE II
  vector_t<double> v, w;
  v.read(), v.write();
  w.read(), w.write();
  
  cout << "Producto escalar de vector_t<double>: " << scal_prod(v, w) << endl << endl;
  
  vector_t<rational_t> x, y;
  x.read(), x.write();
  y.read(), y.write();
  
  cout << "Producto escalar de vector_t<rational_t>: " << scal_prod(x, y) << endl << endl;
  
  
  // FASE III
  matrix_t<double> A, B, C;
  A.read(), A.write();
  B.read(), B.write();
  
  C.multiply(A, B);
  cout << "Multiplicación de matrices A y B: " << endl;
  C.write();


  std::cout << "Modificación: " << std::endl; 
  vector_t<int> p{0};
  A.suma_filas_de_una_matriz(p);
  cout << "La suma de los elementos de las filas B es: " << endl;
  p.write();


















//  std::cout << "La traspuesta de C es: " << std::endl;
//  C.traspuesta(C);
//  C.write();

//  std::cout << "La suma de los elementos de indice par es: " << std::endl;
//  C.suma_indice_par();
//  std::cout << std::endl;

//  std::cout << "La diagonal principal de D es: " << std::endl;
//  D.diagonal_principal(D);

//  std::cout << "Recorido de una matriz: " << std::endl;
//  C.recorrer();
//  std::cout << std::endl;

//  if(is_capicua(p) == 1) {
//    cout << "El vector es capicua" << endl;
//  } else {
//    cout << "El vector no es capicua" << endl;
//  }
  
  return 0;
}
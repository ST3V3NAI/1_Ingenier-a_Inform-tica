// AUTOR: Stevim Abolaji Ibidokun
// FECHA: 10/03/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 3
// ESTILO: Google C++ Style Guide
// COMENTARIOS:
// 

#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_

#include <iostream>
#include <math.h>  // fabs, pow

#include "vector_t.h"
#include "sparse_vector_t.h"

// Clase para polinomios basados en vectores densos de doubles
class Polynomial : public vector_t<double> {
 public:
  // constructores
  Polynomial(const int n = 0) : vector_t<double>(n) {};
  Polynomial(const Polynomial& pol)
      : vector_t<double>(pol) {}; // constructor de copia

  // destructor
  ~Polynomial() {};

  // E/S
  void Write(std::ostream& = std::cout, const double eps = EPS) const;
  
  // operaciones
  double Eval(const double) const;
  bool IsEqual(const Polynomial&, const double = EPS) const;
 };


// Clase para polinomios basados en vectores dispersos
class SparsePolynomial : public sparse_vector_t {
 public:
  // constructores
  SparsePolynomial(const int n = 0) : sparse_vector_t(n) {};
  SparsePolynomial(const Polynomial& pol) : sparse_vector_t(pol) {};
  SparsePolynomial(const SparsePolynomial&);  // constructor de copia

  // destructor
  ~SparsePolynomial() {};

  // E/S
  void Write(std::ostream& = std::cout) const;
  
  // operaciones
  double Eval(const double) const;
  bool IsEqual(const SparsePolynomial&, const double = EPS) const;
  bool IsEqual(const Polynomial&, const double = EPS) const;
};

// E/S
void Polynomial::Write(std::ostream& os, const double eps) const {
  os << get_size() << ": [ ";
  bool first{true};
  for (int i{0}; i < get_size(); i++)
    if (IsNotZero(at(i), eps)) {
      os << (!first ? " + " : "") << at(i)
	 << (i > 1 ? " x^" : (i == 1) ? " x" : "");
      if (i > 1)
	os << i;
      first = false;
    }
  os << " ]" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Polynomial& p) {
  p.Write(os);
  return os;
}

// Operaciones con polinomios

// Evaluación de un polinomio representado por vector denso
double Polynomial::Eval(const double x) const {
  double result{0.0};
  
  for (int i = 0; i < get_size(); i++) { // recorremos el vector
    result += at(i) * pow(x, i); // y lo multiplicamos x elevado a su respectivo numero
  }
  return result; // devuelve un numero doble con el resultado de la operacion 
}

// Comparación si son iguales dos polinomios representados por vectores densos
bool Polynomial::IsEqual(const Polynomial& pol, const double eps) const {
  bool differents = false;
  
  // Comprobamos si el tamaño del vector es igual
  if(get_size() != pol.get_size()) {
    return differents; 
  }
  
  // Recorremos el vector principal
  for(int i = 0; i < get_size(); i++) {
    if(fabs(get_val(i) - pol.get_val(i)) > eps) { // Comprobamos que los vectores sean igual
      return differents; 
    }
  }

  return !differents;
}

// constructor de copia
SparsePolynomial::SparsePolynomial(const SparsePolynomial& spol) {
  *this = spol;   // se invoca directamente al operator=
}

// E/S
// Método de escritura que escribe las x del Sparse Polynomial
void SparsePolynomial::Write(std::ostream& os) const {
  os << get_n() << "(" << get_nz() << "): [ ";
  bool first{true};
  for (int i{0}; i < get_nz(); i++) {
    int inx{at(i).get_inx()};
    os << (!first ? " + " : "") << at(i).get_val()
       << (inx > 1 ? " x^" : (inx == 1) ? " x" : "");
    if (inx > 1)
      os << inx;
    first = false;
  }
  os << " ]" << std::endl;
}

// Sobrecarga del operador de Extracción
std::ostream& operator<<(std::ostream& os, const SparsePolynomial& p) {
  p.Write(os);
  return os;
}

// Operaciones con polinomios

// Evaluación de un polinomio representado por vector disperso
double SparsePolynomial::Eval(const double x) const {
  double result{0.0};
  for (int i = 0; i < get_nz(); i++) { // recorremos el vector
    pair_t<double> sp_value = at(i); // optenemos la posición i no nula (Contiene el getval y el getinx)
    result += sp_value.get_val() * pow(x, sp_value. get_inx()); //sumamos al resultado la multiplicacion del Val por x elevado a indice
  }
  return result; // devolvemos el resultado
}

// Comparación si son iguales dos polinomios representados por vectores dispersos
bool SparsePolynomial::IsEqual(const SparsePolynomial& spol
			       , const double eps) const {
  bool differents = false;
  for(int i = 0; i < (get_nz() - 1); i++) {
    pair_t<double> sp_v = at(i), sp_v2 = spol.at(i);
    if(sp_v.get_val() - sp_v2.get_val() > eps) {
      differents = true; 
    }
  }
  return !differents;
}

// Comparación si son iguales dos polinomios representados por
// vector disperso y vector denso
bool SparsePolynomial::IsEqual(const Polynomial& pol, const double eps) const {
  bool differents = false; // como antes declaramos different
  // poner el código aquí
  for(int i = 0, j = 0; i < (get_nz() - 1); i++, j++) { // recorremos los dos vectores
    pair_t<double> sp_v = at(i); // cojemos la posición de i sparse (recuerda que tiene un val y un inx)
    while (pol.at(j) == 0) { // si la posición en el polinomio normal (denso) es 0, saltamos la posición pq esa no se tendría en cuenta
      j++; // se salta
    }
    if (sp_v.get_val() - pol.at(j) > eps) { // ahora se comparan como antes con 0, y si resulta que es mayor que epsilon, 
      differents = true; // son diferentes
    }
  }
  return !differents;
}


#endif  // POLYNOMIAL_H_

// AUTOR: Stevim Abolaji Ibidokun
// FECHA: 24/03/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 4
// ESTILO: Google C++ Style Guide
// COMENTARIOS:
// 

#ifndef SLLPOLYNOMIAL_H_
#define SLLPOLYNOMIAL_H_

#include <iostream>
#include <math.h>  // fabs, pow

#include "pair_t.h"
#include "sll_t.h"
#include "vector_t.h"

#define EPS 1.0e-6 // precisión 

typedef pair_t<double> pair_double_t;  // Campo data_ de SllPolynomial
typedef sll_node_t<pair_double_t> SllPolyNode;  // Nodos de SllPolynomial

// Clase para polinomios basados en listas simples de pares
// Representa polinomios usando listas de pares (el primer elemento del par es coeficiente, el segundoe xponente)
class SllPolynomial : public sll_t<pair_double_t> { // heeredera de sll_t y de pairs
 public: //metodos (no hay private pq lo hereda de sll_t)
  // constructores
  SllPolynomial(void) : sll_t() {};
  SllPolynomial(const vector_t<double>&, const double = EPS);

  // destructor
  ~SllPolynomial() {};

  // E/S
  void Write(std::ostream& = std::cout) const;
  
  // operaciones
  double Eval(const double) const;
  bool IsEqual(const SllPolynomial&, const double = EPS) const;
  void Sum(const SllPolynomial&, SllPolynomial&, const double = EPS);
};

// Función que comprueba que no sea 0 o si lo es
bool IsNotZero(const double val, const double eps = EPS) { // necesita el valor y neceista epsilon
  return fabs(val) > eps; // si el valor absoluto de val es mayor que epsilon No es 0 y devuelve 1, si no, 0
}

// FASE II
// constructor
SllPolynomial::SllPolynomial(const vector_t<double>& v, const double eps) {
  for(int i = v.get_size() - 1; i >= 0; i--)  { // recorremos la lista ( como si fuera un vector )
    if(IsNotZero(v[i], eps)) { // si no es 0 entonces
      push_front(new SllPolyNode(pair_double_t(v.get_val(i), i))); // metemos en la lista ( con push front ) un nuevo nodo de par (coeficiente, exponente)
    }
  }
}


// E/S
void SllPolynomial::Write(std::ostream& os) const {
  os << "[ ";
  bool first{true};
  SllPolyNode* aux{get_head()};
  while (aux != NULL) {
    int inx{aux->get_data().get_inx()};
    double val{aux->get_data().get_val()};
    if (val > 0)
      os << (!first ? " + " : "") << val;
    else
      os << (!first ? " - " : "-") << fabs(val);
    os << (inx > 1 ? " x^" : (inx == 1) ? " x" : "");
    if (inx > 1)
      os << inx;
    first = false;
    aux = aux->get_next();
  }
  os << " ]" << std::endl;
}

// Sobrecarga del operador << para el cout
std::ostream& operator<<(std::ostream& os, const SllPolynomial& p) {
  p.Write(os);
  return os;
}


// Operaciones con polinomios

// FASE III
// Evaluación de un polinomio representado por lista simple
double SllPolynomial::Eval(const double x) const {
  double result{0.0}; // creamos el resultado iniciado a 0
  SllPolyNode* aux{get_head()}; // creamos un puntero aux que apunte a el primer nodo

  while (aux != NULL) { //mientras exista
    result += aux->get_data().get_val() * pow(x, aux->get_data().get_inx()); // vamos a sumar a result el valor calculado con x elevado a exponente correspndiente del par
    aux = aux->get_next(); // hacemso que aux apunte a el siguiente nodo
  }
  return result; 
}

// Comparación si son iguales dos polinomios representados por listas simples
bool SllPolynomial::IsEqual(const SllPolynomial& sllpol, const double eps) const { // necesita otro polinomio y epsilon
  bool differents = false; // creamos un bool que nos diga si son diferentes
  SllPolyNode* aux{get_head()}; // creamos un aux que apunte al el primer nodo
  SllPolyNode* aux2{sllpol.get_head()}; // creamos un aux secundario que apunta a el primer ndoo del polinomio secundario
  while (aux != NULL || aux2 != NULL) { // mientras los dos existan
    if (aux == NULL && aux2 != NULL || aux != NULL && aux2 == NULL){ // si no existe pero el otro no :
      return false;  // Son diferentes
    }
    if (aux->get_data().get_val() - aux2->get_data().get_val() >= eps){ // si  el value de cada uno es igual
      differents = true;  // si son iguales
    } 
    aux = aux->get_next(); //avanzamos cada aux y hacesmos que apunte al siguiente nodo
    aux2 = aux2->get_next();
  }
  return !differents; // devuelve diferentes al reves ajajja
}

// FASE IV
// Generar nuevo polinomio suma del polinomio invocante mas otro polinomio
void SllPolynomial::Sum(const SllPolynomial& sllpol,
			SllPolynomial& sllpolsum,
			const double eps) {
  SllPolynomial auxSllPolSum;
  SllPolyNode* aux = get_head();
  SllPolyNode* aux2 = sllpol.get_head();
  pair_double_t pair;
  double sum = 0.0;

  // si tienen los mismos exponentes se suman
  while (aux != NULL || aux2 != NULL) { // si alguno existe
    if (aux != NULL && aux2 != NULL) { // mientras los dos aux existan osea que apunten bien
      if (aux->get_data().get_inx() == aux2->get_data().get_inx()) { // y si los indices son igualitos
        sum = aux->get_data().get_val() + aux2->get_data().get_val(); // metemos en la suma los dos valores
        if (IsNotZero(sum, eps)) {  // si la suma no es 0
          pair.set(sum, aux->get_data().get_inx());  // creamos el par que 
          auxSllPolSum.push_front(new SllPolyNode(pair)); // metemos en un polinomio ese nuevo nodo par
        }
        if (aux != NULL) aux = aux->get_next(); // que si aux no es nulo saltamos 
        if (aux2 != NULL) aux2 = aux2->get_next(); // si el otro no es nulo tmb slatamos 
      } else if (aux->get_data().get_inx() > aux2->get_data().get_inx()) { // y si resulta que es mayor
        sum = aux2->get_data().get_val(); // simplemente metemos al mayor
        if (IsNotZero(sum, eps)) { // si no es 0 la suma aun
          pair.set(sum, aux2->get_data().get_inx()); // entonces creamos un par para meterlo
          auxSllPolSum.push_front(new SllPolyNode(pair)); // y lo metemos con el vector resultado
        }
        if (aux2 != NULL) aux2 = aux2->get_next(); // no es nulo saltamos al siguiente
      } else {
        sum = aux->get_data().get_val(); 
        if (IsNotZero(sum, eps)) {
          pair.set(sum, aux->get_data().get_inx());
          auxSllPolSum.push_front(new SllPolyNode(pair));
        }

        if (aux != NULL) aux = aux->get_next();
      }

      // Si uno llego al final
    } else if (aux == NULL) {
      sum = aux2->get_data().get_val();
      if (IsNotZero(sum, eps)) {
        pair.set(sum, aux2->get_data().get_inx());
        auxSllPolSum.push_front(new SllPolyNode(pair));
      }
      if (aux2 != NULL) aux2 = aux2->get_next();

    } else if (aux2 == NULL) {
      sum = aux->get_data().get_val();
      if (IsNotZero(sum, eps)) {
        pair.set(sum, aux2->get_data().get_inx());
        auxSllPolSum.push_front(new SllPolyNode(pair));
      }

      if (aux != NULL) aux = aux->get_next();
    }
  }

  while (!auxSllPolSum.empty()) {
    sllpolsum.push_front(auxSllPolSum.pop_front());
  }

}


#endif  // SLLPOLYNOMIAL_H_

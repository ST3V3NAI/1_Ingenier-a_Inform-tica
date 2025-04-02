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

//  void Scalar(SllPolynomial&, const double scalar);
//  SllPolynomial removeFirstAndLastNodes(const SllPolynomial& polynomial);
//  SllPolynomial EliminarlosImpares(const SllPolynomial& polynomial);
//  pair_double_t RemoveLast();
//  void SumarCoeficientesContinuos(SllPolynomial& aux);
//  void SumarCoeficientesIguales(SllPolynomial& aux);
//  void EliminarImpares();
//  void OrdenarPoly(SllPolynomial&); 
//  int EvalPar(const double num);
//  void EliminarUnMonomioConcretoARaizDeSuIndice(int n); 
//  void Impar(SllPolynomial& modi);
//  void PolinomioSuperiorAlUmbral(const double Ib);
//  double MaxEvenCoef(); 
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
void SllPolynomial::Sum(const SllPolynomial& sllpol, SllPolynomial& sllpolsum, const double eps) {
  // Punteros para recorrer ambas listas enlazadas
  SllPolyNode* aux = get_head();      
  SllPolyNode* aux2 = sllpol.get_head();  

  // Polinomio auxiliar donde se almacenará la suma
  SllPolynomial auxSllPolSum;

  // recorre ambas listas enlazadas hasta que ambas sean nulas
  while (aux != NULL || aux2 != NULL) {
      double sum = 0.0;  // Variable para almacenar la suma de coeficientes
      int exp = 0;       // Exponente asociado al coeficiente

      // `aux` tiene el menor exponente o `aux2` es nulo
      if (aux != NULL && (aux2 == NULL || aux->get_data().get_inx() < aux2->get_data().get_inx())) {
          sum = aux->get_data().get_val();     // Tomamos el coeficiente de aux
          exp = aux->get_data().get_inx();     // Tomamos el exponente de aux
          aux = aux->get_next();               // Avanzamos al siguiente nodo en aux

      // `aux2` tiene el menor exponente o `aux` es nulo
      } else if (aux2 != NULL && (aux == NULL || aux2->get_data().get_inx() < aux->get_data().get_inx())) {
          sum = aux2->get_data().get_val();    // Tomamos el coeficiente de aux2
          exp = aux2->get_data().get_inx();    // Tomamos el exponente de aux2
          aux2 = aux2->get_next();             // Avanzamos al siguiente nodo en aux2

      // Ambos nodos tienen el mismo exponente
      } else {  
          sum = aux->get_data().get_val() + aux2->get_data().get_val();  // Sumamos coeficientes
          exp = aux->get_data().get_inx();  // Exponente común
          aux = aux->get_next();  // Avanzamos en ambas listas
          aux2 = aux2->get_next();
      }

      // Si la suma no es aproximadamente 0, añadimos el término al resultado
      if (IsNotZero(sum, eps)) {
          auxSllPolSum.push_front(new SllPolyNode({sum, exp}));
      }
  }

  // Transferimos los nodos del polinomio auxiliar al resultado final
  while (!auxSllPolSum.empty()) {
      sllpolsum.push_front(auxSllPolSum.pop_front());
  }
}



// MODIFICACIONES -----------------

//void SllPolynomial::PolinomioSuperiorAlUmbral(const double Ib) {
//  std::cout << "Eliminando términos menores que el umbral: " << Ib << std::endl;
  // Caso especial: Si el primer nodo tiene el índice a eliminar
//  while (get_head() != NULL && get_head()->get_data().get_val() < Ib) {
//      pop_front(); // Eliminamos el primer nodo si es necesario
//  }

//  if(get_head() == NULL) return; 

//  SllPolyNode* aux = get_head(); // Apuntador al inicio de la lista
  
// Recorremos la lista buscando el nodo a eliminar
//  while (aux != NULL && aux->get_next() != NULL) {  
//    if (aux->get_next()->get_data().get_val() < Ib) {  
//      erase_after(aux); // Eliminamos el siguiente nodo
//    } else {  
//      aux = aux->get_next(); // Avanzamos solo si no eliminamos, para evitar saltos
//    }
//  }
//}

//double SllPolynomial::MaxEvenCoef() {
//  SllPolyNode* aux = get_head(); 
//  double max = 0.0; 
//  while(aux != NULL) {
//    if(aux->get_data().get_val() > max && aux->get_data().get_inx() % 2 == 0) {
//      max = aux->get_data().get_val();
//    }
//    aux->get_next();
//  }
//  return max;
// }

// crear un nuevo polinomio que solo tenga los grados pares
//SllPolynomial EliminarlosImpares(const SllPolynomial& polynomial) {
//    SllPolynomial result; // creamos un objeto SllPolynomial vacío para almacenar el resultado

    // obtenemos el segundo nodo (el primero es head_)
//    sll_node_t<pair_double_t>* aux = polynomial.get_head();

    // recorremos la lista hasta el penúltimo nodo
//    while (aux != NULL) { //mientras no sea el ultimo, (si detecta que es el ultimo para)
//        if( aux->get_data().get_inx() % 2 == 0){ // Es decir, que si no es 0, es PAR,
        // y si es par, entonces añadira ese nodo
//        result.push_front(new sll_node_t<pair_double_t>(aux->get_data())); // añadimos el nodo actual a la nueva lista ( creamos un par que se añade)
//        }
//        if (aux != NULL) { // esto creo que no pasaria nunca por que hay un null xd
//          aux = aux->get_next(); //hacemos que apunte al siguiente de aux para recorrer el polinomio
//        }
//    } 
    // asi susecivamente se va a generar un nuevo olinomio resultado que lo que haga sea

//    return result; // retorna un polinomio pero solo de pares
//}

// Imprimir monomios de grado impar
//void SllPolynomial::Impar(SllPolynomial& modi) {
//  SllPolynomial auxSllPolModi;                            // Creamos un polinomio auxiliar
//  SllPolyNode* aux = get_head();                          // Creamos un auxiliar para recorrer la lista, del primer polinomio
//  pair_double_t pair;                                     // Creamos un pair_double_t para guardar el valor e indice

//  while (aux != NULL) {                                   // Mientras no lleguemos al final de la lista
//    if (aux->get_data().get_inx() % 2 != 0) {             // Si el indice es impar
//      pair.set(aux->get_data().get_val(), aux->get_data().get_inx()); // Guardamos el valor e indice en el pair
//      auxSllPolModi.push_front(new SllPolyNode(pair));    // Guardamos el pair en el polinomio auxiliar
//    }
//    aux = aux->get_next();                                // Avanzamos al siguiente nodo del primer polinomio
//  }

//  while (!auxSllPolModi.empty()) {                        // Mientras el polinomio auxiliar no este vacio
//    modi.push_front(auxSllPolModi.pop_front());           // Guardamos el polinomio auxiliar en el polinomio suma
//  }
//}

//int SllPolynomial::EvalPar(const double num){
//  double suma = 0;
//  SllPolyNode* auxiliar = get_head();  
//  while(auxiliar != NULL){
//    double coeficiente = auxiliar -> get_data().get_val();
//    int exponente = auxiliar -> get_data().get_inx();
//    if(exponente % 2 == 0){
//      suma = suma + coeficiente*pow(num,exponente);
//    }
//    auxiliar = auxiliar -> get_next();
//  }
//  return suma;
//}

// Escalar un polinomio las veces que necesite
//void SllPolynomial::Scalar(SllPolynomial& sllpscalar, const double scalar){  // pide un polinomio enlazado y un scalar
//  SllPolyNode* aux{get_head()};  // hacemos que el puntero apunte al primer nodo
//  while (aux != NULL){  // mientras exista ese nodo
    //va a cambiarlo por el valor multiplicado por el scalar
//    sllpscalar.push_front(new SllPolyNode(pair_double_t(aux->get_data().get_val() *  scalar, aux->get_data().get_inx())));
//    aux = aux->get_next(); // cambiamos de nodo
//  }
//}

// Pedir un polinomio y devolver el polunomio sin el primer ni el ultimo elemento
//SllPolynomial removeFirstAndLastNodes(const SllPolynomial& polynomial) {
//    SllPolynomial result; // creamos un objeto SllPolynomial vacío para almacenar el resultado

    // obtenemos el segundo nodo (el primero es head_)
//    sll_node_t<pair_double_t>* current = polynomial.get_head()->get_next();

    // recorremos la lista hasta el penúltimo nodo
//    while (current->get_next() != NULL) { //mientras no sea el ultimo, (si detecta que es el ultimo para)
//        result.push_front(new sll_node_t<pair_double_t>(current->get_data())); // añadimos el nodo actual a la nueva lista
//        current = current->get_next(); // avanzamos al siguiente nodo
//    }

//    return result;
//}

//sumar los coeficientos de los monomios con grados contiguos
//void SllPolynomial::SumarCoeficientesContinuos(SllPolynomial& aux){
//recorremos el Polinomio
//  SllPolyNode* aux1{aux.get_head()}; // puntero al primer nodo de sllp1
//  SllPolyNode* aux2{aux1->get_next()}; // puntero al primer nodo de sllp2

//  while (aux1 != NULL && aux2 != NULL){  // mientras exista ese nodo
//  if (aux1->get_data().get_inx() +1 == aux2->get_data().get_inx()){ // si los indices continuos es igual al +1
  //entonces los sumamos y hacemos un cout
//     double sum = aux1->get_data().get_val() + aux2->get_data().get_val();
//     std::cout << " La suma de los indices continuos: "<< aux1->get_data().get_inx() << " y " << aux2->get_data().get_inx() <<" es = " << sum << std::endl;
//  }
//  aux1 = aux1->get_next(); // cambiamos de nodo
//  aux2 = aux1->get_next();
//  }
//}

//sumas los coeficienes de los monomios con grados iguales
//void SllPolynomial::SumarCoeficientesIguales(SllPolynomial& aux){
//recorremos el Polinomio
//  SllPolyNode* aux1{aux.get_head()}; // puntero al primer nodo de sllp1
//  SllPolyNode* aux2{aux1->get_next()}; // puntero al primer nodo de sllp2

//  while (aux1 != NULL && aux2 != NULL){  // mientras exista ese nodo
//  if (aux1->get_data().get_inx() +1 == aux2->get_data().get_inx()){ // si los indices continuos es igual al +1
  //entonces los sumamos y hacemos un cout
//     double sum = aux1->get_data().get_val() + aux2->get_data().get_val();
//     std::cout << " La suma de los indices continuos: "<< aux1->get_data().get_inx() << " y " << aux2->get_data().get_inx() <<" es = " << sum << std::endl;
//  }
//  aux1 = aux1->get_next(); // cambiamos de nodo
//  aux2 = aux1->get_next();
//  }
//}

//retornar el polinomio pasado como pararmetro pero con los gradoss pares borrados
//void SllPolynomial::EliminarImpares() {
//  if (get_head()->get_data().get_inx() % 2 != 0){ // si la cabecera es impar
//    pop_front(); // la borramos
//  }
//  SllPolyNode* aux{get_head()}; // creamos un puntero que apunte a el primero
//  while (aux ->get_next() != NULL){  // mientras ese puntero acierte
//    if( aux -> get_next() -> get_data().get_inx() % 2 != 0){ // y si el grado del siguiente que acierta es impar
//      erase_after(aux); // borra el anterior al siguiente, osea , ese
//    }
//    if (aux->get_next() != NULL) { // esto creo que no pasaria nunca por que hay un null xd
//      aux = aux->get_next(); //hacemos que apunte al siguiente de aux para recorrer el polinomio
//    }
//  }
//}


// Ordena el polinomio de mayor a menor segun su coeficiente
//void SllPolynomial::OrdenarPoly(SllPolynomial& sllordenado) {
//  SllPolyNode* aux = get_head();
//  SllPolyNode* aux2 = get_head();
//  vector_t<pair_double_t> vector_ord;

//  int tam = 0;

//  while (aux != NULL) {
//    tam++;
//    aux = aux->get_next();
//  }

//  vector_ord.resize(tam);

//  for (int i = 0; i < tam; i++) {
//    vector_ord[i] = aux2->get_data();
//    aux2 = aux2->get_next();
//  }

//  for (int i = 0; i < tam; i++) {
//    for (int j = 0; j < tam - 1; j++) {
//      if (vector_ord[j].get_val() < vector_ord[j + 1].get_val()) {
//        pair_double_t aux = vector_ord[j];
//        vector_ord[j] = vector_ord[j + 1];
//        vector_ord[j + 1] = aux;
//      }
//    }
//  }

//  for (int i = 0; i < tam; i++) {
//    sllordenado.push_front(new SllPolyNode(vector_ord[i]));
//  }
//}

//void SllPolynomial::EliminarUnMonomioConcretoARaizDeSuIndice(int n) {
//  std::cout << "Eliminando términos con índice: " << n << std::endl;
  // Caso especial: Si el primer nodo tiene el índice a eliminar
//  while (get_head() != NULL && get_head()->get_data().get_inx() == n) {
//      pop_front(); // Eliminamos el primer nodo si es necesario
//  }

//  if(get_head() == NULL) return; 

//  SllPolyNode* aux = get_head(); // Apuntador al inicio de la lista
  
  // Recorremos la lista buscando el nodo a eliminar
//  while (aux != NULL && aux->get_next() != NULL) {  
//    if (aux->get_next()->get_data().get_inx() == n) {  
//        erase_after(aux); // Eliminamos el siguiente nodo
//    } else {  
//        aux = aux->get_next(); // Avanzamos solo si no eliminamos, para evitar saltos
//    }
//  }
//}


#endif  

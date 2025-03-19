// AUTOR: Stevim Abolaji Ibidokun
// FECHA: 10/03/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 4.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 3
// ESTILO: Google C++ Style Guide
// COMENTARIOS:
// 

#ifndef SPARSE_VECTORT_H_
#define SPARSE_VECTORT_H_

#include <iostream>
#include <math.h>  // fabs

#include "vector_t.h"
#include "pair_t.h"

#define EPS 1.0e-6

typedef pair_t<double> pair_double_t; // typedef para simplificar el código
typedef vector_t<pair_double_t> pair_vector_t; // typedef para simplificar el código

class sparse_vector_t {
 public:
  // constructores 
  sparse_vector_t(const int = 0); // constructor por defecto
  sparse_vector_t(const vector_t<double>&,
		  const double = EPS); // constructor normal
  sparse_vector_t(const sparse_vector_t&);  // constructor de copia

  // operador de asignación
  sparse_vector_t& operator=(const sparse_vector_t&);

  // destructor
  ~sparse_vector_t();
  
  // getters
  int get_nz(void) const;
  int get_n(void) const;

  // getters-setters
  pair_double_t& at(const int);
  pair_double_t& operator[](const int);
  
  // getters constantes
  const pair_double_t& at(const int) const;
  const pair_double_t& operator[](const int) const;

  // E/S
  void write(std::ostream& = std::cout) const;

    // Modification
    void Modificacion(const int numero);
    // Funcion para mostrar los valores a partir de un indice
    void MostrarValores(const int numero);
    void MostrarValores2(const int numero);
    // Resultado de la suma de los coeficientes de un polinomio a partir de un indice dado
    double SumaCoeficientes(const int numero);
    // Muestra los indices del vector
    void MostrarIndices();
    // Mostrar el valor mayor de un vector y su indice
    void Mayor();
    // Mostrar el valor menor de un vector y su indice
    void Menor();

    // bool Exists(const int index) const; 

    // double dot_product(const sparse_vector_t& other) const; 

    double MediaMayoresQue(double sp) const;
    int SumaDeIndicesPares() const; 
  

 private:
  pair_vector_t pv_;  // valores + índices
  int nz_;            // nº de valores distintos de cero = tamaño del vector
  int n_;             // tamaño del vector original

  // bool IsNotZero(const double, const double = EPS) const;
};


bool IsNotZero(const double val, const double eps = EPS) {
  return fabs(val) > eps;
}

sparse_vector_t::sparse_vector_t(const int n) : pv_(n), nz_(0), n_(n) {}

// FASE II
// este es el constructor que me va a hacer el polinomio disperso correcramente con los pares
sparse_vector_t::sparse_vector_t(const vector_t<double>& v, const double eps)
    : pv_(), nz_(0), n_(0) {

    n_ = v.get_size();  // Asignamos a nuestro vector el tamanño
    for (int i = 0; i < n_; i++) { // Recorremos el vector y comprobamos que posiciones no son 0
      if (v.at(i) != 0) {
        nz_++;                     // Contamos las que no son 0
      }
    }

    pv_.resize(nz_);              // Ajustamos nuestro polinomio al tamaño de las posiciones que no fueron 0

    for (int i = 0, p = 0; i < n_; i++) { // Recorremos de nuevo nuestro vector
      if (v.at(i) != 0) {                 // En caso de que no sea 0
        pair_double_t aux(v.get_val(i), i); // Declaramos una variable auxiliar para almacenar el indice y el valor del vector
        pv_.at(p) = aux;                    // Y se lo mandamos al nuevo vector
        p++;
      }
    }
}

// constructor de copia
sparse_vector_t::sparse_vector_t(const sparse_vector_t& w) {
  *this = w;  // se invoca directamente al operator=
}

// operador de asignación
sparse_vector_t& sparse_vector_t::operator=(const sparse_vector_t& w) {
  nz_ = w.get_nz();
  n_ = w.get_n();
  pv_ = w.pv_;

  return *this;
}

// Destructor
sparse_vector_t::~sparse_vector_t() {} 

// Getter nz
inline int sparse_vector_t::get_nz() const {
  return nz_;
}

// Getter n
inline int sparse_vector_t::get_n() const {
  return n_;
}

// Getter-Setter
pair_double_t& sparse_vector_t::at(const int i) {
  assert(i >= 0 && i < get_nz());
  return pv_[i];
}

// Sobrecrga del operador []
pair_double_t& sparse_vector_t::operator[](const int i) {
  return at(i);
}

// Getter-Setter
const pair_double_t& sparse_vector_t::at(const int i) const {
  assert(i >= 0 && i < get_nz());
  return pv_[i];
}

// Sobrecarga del operador[]
const pair_double_t& sparse_vector_t::operator[](const int i) const {
  return at(i);
}

// E/S
// Método de escritura
void sparse_vector_t::write(std::ostream& os) const { 
  os << get_n() << "(" << get_nz() << "): [ ";
  for (int i = 0; i < get_nz(); i++)
    os << pv_[i] << " ";
	os << "]" << std::endl;
}

// Sobrecarga del operador de extracción
std::ostream& operator<<(std::ostream& os, const sparse_vector_t& sv) {
  sv.write(os);
  return os;
}

// Modificación
void sparse_vector_t::Modificacion(const int numero) {
  for (int i = 0; i < get_nz(); i++){
    int contador=0;
    
    if(numero == pv_[i].get_inx()){
    std::cout<< pv_[i].get_val()<< " x^" << pv_[i].get_inx()<<std::endl;
    }
  }  

  bool haynumero = false;
  for (int j = 0; j < get_nz(); j++) {
    if (numero != pv_[j].get_inx()) {
      haynumero = true;
    } else{
      haynumero = false;
      break;
    }
  }if(haynumero){
  std::cout << 0 << std::endl;
  }
}

// Funcion para mostrar los valores a partir de un indice
void sparse_vector_t::MostrarValores(const int numero) {
  assert(numero >= 0 && numero < get_n());
  std::cout << get_n() << "(" << get_nz() << ") = " << "[ ";
  for (int i = numero; i < get_nz(); i++) {
    std::cout << pv_[i].get_val() << " x^" << pv_[i].get_inx();
    if (i != get_nz() - 1) {
      std::cout << " + ";
    }
  }
  std::cout << " ]" << std::endl;
}

// Funcion para mostrar los valores a partir de un indice solo los de indice par o impar dependiendo del numero que le pasemos
void sparse_vector_t::MostrarValores2(const int numero) {
  assert(numero >= 0 && numero < get_n());
  std::cout << get_n() << "(" << get_nz() << ") = " << "[ ";
  for (int i = numero; i < get_nz(); i += 2) {
      std::cout << pv_[i].get_val() << " x^" << pv_[i].get_inx();
      if (numero%2 == 0){
        if (i != get_nz() - 1) {std::cout << " + ";}
      }
      else{
        if (i != get_nz() - 2) {std::cout << " + ";}
      }
    }
  std::cout << " ]" << std::endl;
}

// Muestra los indices del vector
void sparse_vector_t::MostrarIndices() {
  std::cout << get_n() << "(" << get_nz() << ") = " << "[ ";
  for (int i = 0; i < get_nz(); i++) {
    std::cout << pv_[i].get_inx();
    if (i != get_nz() - 1) {
      std::cout << " , ";
    }
  }
  std::cout << " ]" << std::endl;
}

// Mostrar el valor mayor de un vector y su indice
void sparse_vector_t::Mayor() {
  double mayor = pv_[0].get_val();
  int indice = 0;
  for (int i = 0; i < get_nz(); i++) {
    if (pv_[i].get_val() > mayor) {
      mayor = pv_[i].get_val();
      indice = pv_[i].get_inx();
    }
  }
  std::cout << "El mayor es: " << mayor << " y su pocicion es: " << indice << std::endl;
}

// Mostrar el valor menor de un vector y su indice
void sparse_vector_t::Menor() {
  double menor = pv_[0].get_val();
  int indice = 0;
  for (int i = 0; i < get_nz(); i++) {
    if (pv_[i].get_val() < menor) {
      menor = pv_[i].get_val();
      indice = pv_[i].get_inx();
    }
  }
  std::cout << "El menor es: " << menor << " y su pocicion es: " << indice << std::endl;
}

double sparse_vector_t::MediaMayoresQue(double sp) const {
  double suma{0.0};
  int contador{0};

  for(int i = 0; i < nz_; i++) {
    if(pv_[i].get_val() > sp) {
      suma += pv_[i].get_val();
      contador++;
    }
  }
  return (contador > 0) ? (suma / contador) : 0.0; 
}

int sparse_vector_t::SumaDeIndicesPares() const {
  int suma = 0;
  for(int i = 0; i < get_nz(); i++) {
    if(at(i).get_inx() % 2 == 0)  {
      suma += at(i).get_inx();
    }
  }
  return suma; 
}

//bool sparse_vector_t::Exists(const int index) const {
//  bool encontrado = false; 

//  for(int i = 0; i < get_nz(); i++) {
//    if(at(i).get_inx() == index) {
//      encontrado = true; 
//    }
//  }

//  return encontrado; 
// }

//double sparse_vector_t::dot_product(const sparse_vector_t& other) const {
//  double dot_product{0.0};
//  int i = 0, j = 0;

//    while (i < get_nz() && j < other.get_nz()) {
//      int index1 = pv_[i].get_inx();
//      int index2 = other.pv_[j].get_inx();
  
//      if (index1 == index2) {
//        dot_product += pv_[i].get_val() * other.pv_[j].get_val();
//        i++; 
//        j++; // Avanzan ambos, ya que se usaron los valores
//      } 
//      else if (index1 < index2) {
//        i++; // Avanza solo `i`
//      } 
//      else {
//        j++; // Avanza solo `j`
//      }
//    }
  
//    return dot_product;
//  }
  

#endif  // SPARSE_VECTOR_T_H_

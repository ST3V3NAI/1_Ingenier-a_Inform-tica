// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include "rational_t.hpp"

rational_t::rational_t(const int n, const int d) {
  assert(d != 0);
  num_ = n, den_ = d;
}

// pauta de estilo [87]: 3 líneas de separación entre métodos

// pauta de estilo [83]: tipo retornado en línea anterior al método
// Getter del numerador
inline int rational_t::get_num() const {
  return num_;
}


// Getter del denominador
inline int rational_t::get_den() const {
  return den_;
}


// Setter del numerador  
void rational_t::set_num(const int n) {
  num_ = n;
}


// Setter del denominador  
void rational_t::set_den(const int d) {
  assert(d != 0);
  den_ = d;
}


// Método que obtienes el valor de un numeraro racional
inline double rational_t::value() const { 
  return double(get_num()) / get_den();
}


// Método que devuelve el opuesto de un numero racional
rational_t  rational_t::opposite() const { 
  return rational_t((-1)*get_num(), get_den());
}


// Método que devuelve el reciproco de un numero racional
rational_t rational_t::reciprocal() const { 
  return rational_t(get_den(), get_num());
}



// comparaciones
// Método que compara si dos numeros racionales son iguales
bool rational_t::is_equal(const rational_t& r, const double precision) const { 
  return fabs(value() - r.value()) < precision;
}


// Método que compara si un numeros racional es mayor que 
bool rational_t::is_greater(const rational_t& r, const double precision) const {
  return (value() - r.value()) > precision;
}


// Método que compara si un numeros racional es menor que 
bool rational_t::is_less(const rational_t& r, const double precision) const {
  return r.is_greater(*this, precision);
}


// operaciones
// Método que suma dos numeros racionales
rational_t rational_t::add(const rational_t& r) const {
  return rational_t(get_num() * r.get_den() + get_den() * r.get_num(), 
                    get_den() * r.get_den());
}


// Método que resta dos numeros racionales
rational_t rational_t::substract(const rational_t& r) const {
  return add(r.opposite());
}


// Método que multiplica dos numeros racionales
rational_t rational_t::multiply(const rational_t& r) const {
  return rational_t(get_num() * r.get_num(), get_den() * r.get_den());
}


// Método que divide dos numeros racionales
rational_t rational_t::divide(const rational_t& r) const {
  return multiply(r.reciprocal());
}


// FASE I: operadores
// Sobrecarga del operador suma
rational_t operator+(const rational_t& a, const rational_t& b) {
  int num = a.get_num() * b.get_den() + a.get_num() * b.get_den();
  int den = a.get_den() * b.get_num();
  rational_t rational(num, den);
  return rational;
}


// Sobrecarga del operador resta
rational_t operator-(const rational_t& a, const rational_t& b) {
  int num = a.get_num() * b.get_den() - (a.get_num() * b.get_den());
  int den = a.get_den() * b.get_num();
  rational_t rational(num, den);
  return rational; 
}


// Sobrecarga dekl operador *
rational_t operator*(const rational_t& a, const rational_t& b) {
  int num = a.get_num() * b.get_num();
  int den = a.get_den() * b.get_den();
  rational_t rational(num, den);
  return rational;
}


// Sobrecarga del operador /
rational_t operator/(const rational_t& a, const rational_t& b) {
  int num = a.get_num() * b.get_den();
  int den = a.get_den() * b.get_num();
  rational_t rational(num, den);
  return rational;
}



// E/S
// Método de escritura de numero racional
void rational_t::write(ostream& os) const {
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}


// Método de lectura de un numero racional
void rational_t::read(istream& is) {
  is >> num_ >> den_;
  assert(den_ != 0);
}


// Sobrecarga del operador de inserción
ostream& operator<<(ostream& os, const rational_t& r) {
  r.write(os);
  return os;
}

// Sobrecarga del operador de extracción
istream& operator>>(istream& is, rational_t& r) {
  r.read(is);
  return is;
}
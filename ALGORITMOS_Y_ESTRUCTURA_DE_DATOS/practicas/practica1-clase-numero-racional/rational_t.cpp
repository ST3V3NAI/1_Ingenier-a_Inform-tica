// AUTOR: Steven Abolaji Ibidokun
// FECHA: 10/02/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include "rational_t.hpp"

// Constructor de la clase Rational
rational_t::rational_t(const int n, const int d) {
  assert(d != 0);
  num_ = n, den_ = d;
}

// pauta de estilo [87]: 3 líneas de separación entre métodos
// pauta de estilo [83]: tipo retornado en línea anterior al método

// Getter que devuelve el numerador de un número racional
int rational_t::get_num() const {
  return num_;
}


// Getter que devuelve el denominador de un número racional 
int rational_t::get_den() const {
  return den_;
}


// Setter que asigna el valor el valor del numerador
void rational_t::set_num(const int n) {
  num_ = n;
}


// Setter que asigna el valor del denominador
void rational_t::set_den(const int d) {
  assert(d != 0);
  den_ = d;
}


// Método que retorna el valor del numero racional (numerador / denominador)
double rational_t::value() const { 
  return double(get_num()) / get_den();
}


// comparaciones
// Método que comprueba que dos números racionales son iguales
bool rational_t::is_equal(const rational_t& r, const double precision) const { 
  if(fabs(value() - r.value()) < precision) {
    return true;
  } else {
    return false;
  }
}

// Método que comprueba si un número racional es mayor que otro
bool rational_t::is_greater(const rational_t& r, const double precision) const {
  if((value() - r.value()) > precision) {
    return true;
  } else {
    return false;
  }

}

// Método que comprueba si un número racional es menor que otro
bool rational_t::is_less(const rational_t& r, const double precision) const {
  if((r.value() - value()) > precision) {
    return true;
  } else {
    return false;
  }
}

// Método de simplificación
//rational_t rational_t::simplify(const rational_t& r) const {
//  int gcd = std::gcd(num_, den_);
//  int new_num = num_ / gcd;
//  int new_den = den_ / gcd;

//  if (new_den < 0) {
//    new_num = -new_num;
//    new_den = -new_den;
//  }

//  return rational_t(new_num, new_den);
//}


// Método de m.c.m
//rational_t rational_t::lowest_common_multiple(const rational_t& r) {
//  return (den_ * r.get_den() / std::gcd(den_, r.get_den()));
//}


// operaciones

// Método que devuelve la suma de dos números racionales
rational_t rational_t::add(const rational_t& r) { 
  int num = get_num() * r.get_den() + r.get_num() * get_den();
  int den = get_den() * r.get_den();
  rational_t rational(num, den);
  return rational;
}

//rational_t rational_t::add(const rational_t& r) {
//    int lcm = (get_den() * r.get_den()) / std::gcd(get_den(), r.get_den());
//    int num = (get_num() * (lcm / get_den())) + (r.get_num() * (lcm / r.get_den()));
//    return rational_t(num, lcm);
//}

// Método que devuelve la resta de dos números racionales
rational_t rational_t::substract(const rational_t& r) {
  int num = get_num() * r.get_den() - (r.get_num() * get_den());
  int den = get_den() * r.get_den();
  rational_t rational(num, den);
  return rational; 
}

// rational_t rational_t::substract(const rational_t& r) {
//   int lcm = (get_den() * r.get_den()) / std::gcd(get_den(), r.get_den()); 
//   int num = (get_num() * (lcm / get_den())) - (r.get_num() * (lcm / r.get_den()));
//   return rational_t(num, lcm);
// }


// Método que devuelve el producto de dos numeros racionales
rational_t rational_t::multiply(const rational_t& r)
{ 
  int num = get_num() * r.get_num();
  int den = get_den() * r.get_den();
  rational_t rational(num, den);
  return rational;
}


// Método que devuelve la división de dos números racionales
rational_t rational_t::divide(const rational_t& r) { 
  int num = get_num() * r.get_den();
  int den = get_den() * r.get_num();
  rational_t rational(num,den);
  return rational;
}


// Método que hace la raíz cuadrada de la suma
//rational_t rational_t::raiz_cuadrada(const rational_t& r) {
//  int num = (get_num() * r.get_den() + r.get_num() * get_den());
//  int den = (get_den() * r.get_den());
//  rational_t rational(sqrt(num), sqrt(den));
//  return rational; 
//}

// Método que realiza la raíz del denominador
// rational_t rational_t::squared_den(const rational_t& r) {
//   cout << num_ << " / simbolo raiz " << den_ << ": "; 
//   double new_den = sqrt(den_);
//   return rational_t(num_, new_den); 
//}

// Método que devuelve el cuadrado de la suma de los dos racionales
// rational_t rational_t::cuadrado(const rational_t& r) {
//  int num = (get_num() * r.get_den() + r.get_num() * get_den()) * (get_num() * r.get_den() + r.get_num() * get_den());
//  int den = (get_den() * r.get_den()) * (get_den() * r.get_den()) ;
//  rational_t rational(num, den);
//  return rational; 
// }

// Método que resta una unidad a un numero racional dado
// rational_t rational_t::resta_unidad(const rational_t& r){
//  int num = get_num() * r.get_den() - (r.get_num() * get_den());
//  int den =  get_den() * r.get_den();
//  rational_t rational(num, den); 
//  return rational;
//}

// E/S
// Método que muestra por pantalla un número racional
void
rational_t::write(ostream& os) const
{
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}


// Método que lee un número racional solicitado por pantalla 
void 
rational_t::read(istream& is)
{
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}


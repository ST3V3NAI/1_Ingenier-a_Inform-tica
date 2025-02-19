// AUTOR: Steven Abolaji Ibidokun
// FECHA: 19/02/25
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
  } else if (fabs(value()) == 0) {
    return true; 
  } else {
    return false;
  }
}


// Método que comprueba si un número racional es mayor que otro
bool rational_t::is_greater(const rational_t& r, const double precision) const {
  return((value() - r.value()) > precision);
}


// Método que comprueba si un número racional es menor que otro
bool rational_t::is_less(const rational_t& r, const double precision) const {
  return((r.value() - value()) > precision);
}

// Método de simplificación
rational_t rational_t::simplify() {
    int divisor = std::gcd(num_, den_); // Calcula el MCD (Maximo común divisor)
    return rational_t(num_ / divisor, den_ / divisor); // Retorna la fracción simpliciada
}

// Método de m.c.m
int rational_t::lowest_common_multiple(const rational_t& r) {
  return (den_ * r.get_den() / std::gcd(den_, r.get_den()));
}

// operaciones
// Método que devuelve la suma de dos números racionales
rational_t rational_t::add(const rational_t& r) { 
//  int num = get_num() * r.get_den() + r.get_num() * get_den();
  // Calcula el mínimo común múltiplo (mcm) entre el denominador del objeto actual y el de r
  int lcm = lowest_common_multiple(r); 
  // Se multiplica el numerador de cada fracción por el factor necesario para escalar su denominador a lcm
  int num = (get_num() * (lcm / get_den())) + (r.get_num() * (lcm / r.get_den()));
  rational_t rational(num, lcm);
  return rational.simplify();
}


//rational_t rational_t::add(const rational_t& r) {
//    int lcm = (get_den() * r.get_den()) / std::gcd(get_den(), r.get_den());
//    int num = (get_num() * (lcm / get_den())) + (r.get_num() * (lcm / r.get_den()));
//    return rational_t(num, lcm);
//}


// Método que devuelve la resta de dos números racionales
rational_t rational_t::substract(const rational_t& r) {
//  int num = get_num() * r.get_den() - (r.get_num() * get_den());
   // Calcula el mínimo común múltiplo (mcm) entre el denominador del objeto actual y el de r
  int lcm = lowest_common_multiple(r);
    // Se multiplica el numerador de cada fracción por el factor necesario para escalar su denominador a lcm
  int num = (get_num() * (lcm / get_den())) - (r.get_num() * (lcm / r.get_den()));
  //int den = get_den() * r.get_den();
  rational_t rational(num, lcm);
  return rational.simplify(); // Retorna el resultado simplificado
}

// rational_t rational_t::substract(const rational_t& r) {
//   int lcm = (get_den() * r.get_den()) / std::gcd(get_den(), r.get_den()); 
//   int num = (get_num() * (lcm / get_den())) - (r.get_num() * (lcm / r.get_den()));
//   return rational_t(num, lcm);
// }


// Método que devuelve el producto de dos numeros racionales
rational_t rational_t::multiply(const rational_t& r) { 
  int num = get_num() * r.get_num();
  int den = get_den() * r.get_den();
  rational_t rational(num, den);
  return rational.simplify();
}


// Método que devuelve la división de dos números racionales
rational_t rational_t::divide(const rational_t& r) { 
  int num = get_num() * r.get_den();
  int den = get_den() * r.get_num();
  rational_t rational(num,den);
  return rational.simplify();
}

// MODIFICACIÓN DE HOY: x.operador(y)
void rational_t::suma_par(const rational_t &y) {
    int suma_total{0};
    for(int i = num_; i < y.get_num(); i++) {
       if((get_num() % get_den() == 0) && ((i / get_den()) % 2 == 0)){
          suma_total += (i / get_den());
       }
    }
    cout << suma_total << endl;
}

// E/S
// Método que muestra por pantalla un número racional
void rational_t::write(ostream& os) const {
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}


// Método que lee un número racional solicitado por pantalla 
void rational_t::read(istream& is) {
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}


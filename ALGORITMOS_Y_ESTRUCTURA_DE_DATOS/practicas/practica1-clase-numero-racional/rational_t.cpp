// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include "rational_t.hpp"

/**
 * @brief Constructor de la clase Rational
 * 
 * @param[in] n Numerador 
 * @param[in] d Denominador
 */
rational_t::rational_t(const int n, const int d)
{
  assert(d != 0);
  num_ = n, den_ = d;
}

// pauta de estilo [87]: 3 líneas de separación entre métodos

// pauta de estilo [83]: tipo retornado en línea anterior al método
/**
 * @brief Getter que se encarga de obtener del numerador
 * 
 * @return Retorna el valor del numerador
 */
int 
rational_t::get_num() const
{
  return num_;
}


/**
 * @brief Getter que se encarga de obtener el denominador 
 * 
 * @return Retorna el valor del denominador
 */
int
rational_t::get_den() const
{
  return den_;
}


/**
 * @brief  Setter que asigna el valor el valor del numerador
 * 
 * @param[in] n Numerador
 */
void
rational_t::set_num(const int n)
{
  num_ = n;
}


/**
 * @brief Setter que asigna el valor del denominador
 * 
 * @param[in] d Denominador
 */
void
rational_t::set_den(const int d)
{
  assert(d != 0);
  den_ = d;
}


/**
 * @brief Método que retorna el valor del numero racional (numerador / denominador)
 * 
 * @return El valor del numero racional
 */
double
rational_t::value() const
{ 
  return double(get_num()) / get_den();
}


// comparaciones
/**
 * @brief Función que comprueba si |a-b| < ϵ
 * 
 * @param[in] r El numero rational
 * @param[in] precision La precisión
 * @return true En caso de que se cumpla
 * @return false En caso contrario
 */
bool rational_t::is_equal(const rational_t& r, const double precision) const { 
  if(fabs(value() - r.value()) < EPSILON) {
    return true;
  } else {
    return false;
  }
}

/**
 * @brief Función que comprueba si a-b > ϵ
 * 
 * @param[in] r El numero rational
 * @param[in] precision La precisión
 * @return true En caso de que se cumpla
 * @return false En caso de que no se cumpla
 */
bool rational_t::is_greater(const rational_t& r, const double precision) const {
  if((value() - r.value()) > EPSILON) {
    return true;
  } else {
    return false;
  }

}

/**
 * @brief Función que comprueba si a-b < -ϵ
 * 
 * @param[in] r El numero rational
 * @param[in] precision La precisión
 * @return true En caso de que se cumpla
 * @return false En caso de que no se cumpla
 */
bool rational_t::is_less(const rational_t& r, const double precision) const {
  if((r.value() - value()) < -(EPSILON)) {
    return true;
  } else {
    return false;
  }
}


// operaciones
/**
 * @brief Función que busca el minimo comun de los dos numeros racionales
 * y los suma
 * 
 * @param[in] r Numero racional
 * @return El numero racional sumado
 */
rational_t rational_t::add(const rational_t& r) { 
  int num = get_num() * r.get_den() + r.get_num() * get_den();
  int den = get_den() * r.get_den();
  rational_t rational(num, den);
  return rational;
}

/**
 * @brief Función que busca el minimo comun de los dos numeros racionales
 * y los resta
 * 
 * @param[in] r Numero racional
 * @return El numero racional sumado
 */
rational_t rational_t::substract(const rational_t& r) {
  int num = get_num() * r.get_den() - (r.get_num() * get_den());
  int den = get_den() * r.get_den();
  rational_t rational(num, den);
  return rational; 
}


/**
 * @brief Función que multiplica los numeros complejos
 * 
 * @param[in] r Numero racional
 * @return El numero racional sumado
 */
rational_t rational_t::multiply(const rational_t& r)
{ 
  int num = get_num() * r.get_num();
  int den = get_den() * r.get_den();
  rational_t rational(num, den);
  return rational;
}


/**
 * @brief Función que divide dos numeros complejos
 * 
 * @param[in] r Numero racional
 * @return El numero racional sumado
 */
rational_t rational_t::divide(const rational_t& r) { 
  int num = get_num() * r.get_den();
  int den = get_den() * r.get_num();
  rational_t rational(num,den);
  return rational;
}



// E/S
/**
 * @brief Método que se encarga de escribir el numero racional
 * 
 * @param[in] os Operador de flujo de salida
 */
void
rational_t::write(ostream& os) const
{
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}


/**
 * @brief Método que se encarga de leer el numero racional
 * 
 * @param[in] is Operador de flujo de entrada
 */
void 
rational_t::read(istream& is)
{
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}

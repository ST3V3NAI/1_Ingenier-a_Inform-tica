// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-12
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos de examenes de matrices
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include <cassert>

template<class T> class matrix_t {
public:
  // Constructor de la clase matrix_t
  matrix_t(const int = 0, const int = 0);
  // Destructor de la clase matrix_t
  ~matrix_t();
  
  void resize(const int, const int);
  
  // getters
  int get_m(void) const;
  int get_n(void) const;
  
  // getters-setters
  T& at(const int, const int);
  T& operator()(const int, const int);
  
  // getters constantes
  const T& at(const int, const int) const;
  const T& operator()(const int, const int) const;
  
  // operaciones y operadores para la multiplicacion matricial
  void multiply(const matrix_t<T>&, const matrix_t<T>&);

  // Metodo que suma las filas
  void suma_filas_de_una_matriz(vector_t<int>& l);
  void menor(matrix_t& M, int r);

  // Método de escritura y de lectura
  void write(ostream& = cout) const;
  void read(istream& = cin);

private:
// Atributos de clase matrix_t
  int m_, n_; // m_ filas y n_ columnconst matrix_t<T>& Aas
  vector_t<T> v_;
  
  int pos(const int, const int) const;
};

template <class T>
double determinante(void) {
  assert(m_ == n_);

  if(at(1, 1) == 1) return 1; 

  double suma = 0; 
  else {
    for(int i = 0; i < m_; i++) 
      matrix_t M_aux; 
      menor(M_aux, i);
        suma += at(i, 1) * coef(i, 1) * M_aux.determinante();
  }
  return suma; 
}

template<class T>
void menor(matrix_t& M, int r) {
  assert(m_ == n_);

  M.resize(m - 1, n - 1);
  int inc_r = 0;
  for(int i = 1; i < M.get_m(); i++) {
    if(i == r) inc_r = 1;
    for(int j == 1; j <= M.get_n(); j++) 
      M(i, j) = at(i + inc_r, j + 1);
  }
}
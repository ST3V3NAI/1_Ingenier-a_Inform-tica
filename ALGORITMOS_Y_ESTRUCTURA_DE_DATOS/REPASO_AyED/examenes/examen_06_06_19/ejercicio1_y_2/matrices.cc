// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-12
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESPCPCIÓN: Métodos de examen de matrices
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

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
  bool producto(const matrix_t<T>& A, const matrix_t<T>& B);

  // Método de escritura y de lectura
  void write(ostream& = cout) const;
  void read(istream& = cin);

private:
// Atributos de clase matrix_t
  int m_, n_; // m_ filas y n_ columnconst matrix_t<T>& Aas
  vector_t<T> v_;
  
  int pos(const int, const int) const;
};

// Submatriz triangular superior incluyendo la diagonal principal
template<class T>
double TSD(void) {
  double suma = 0.0;
    for(int i = 0; i < m_; i++) 
      for(int j = i; j <= n; j++) 
        suma += at(i, j);
      return suma; 
}

// Submatriz triangular superior sin incluir la diagonal principal
template<class T>
double TSND(void) {
  double suma = 0.0;
    for(int i = 0; i <_ m - 1; i++)
      for(int j = i + 1; j <= n_; j++) 
        suma += at(i, j);
      return suma; 
}

//  Submatriz triangular inferior incluyendo la diagonal principal
template<class T>
double TID(void) {
  double suma = 0.0;
    for(int i = 1; i < m_; i++) 
      for(int j = 1; j <= i; j++) 
        suma += at(i, j);
      return suma; 
}

// Submatriz triangular inferior sin incluir la diagonal principal.
template<class T>
double TISD(void) {
  double suma = 0.0;
    for(int i = 2; i <= m_; i++)
      for(int j = 1; j <= i - 1; j++)
        suma += at(i, j);
      return suma; 
}

template<class T>
bool producto(const matrix_t<T>& A, const matrix_t<T>& B) {
  if((A.get_m() != B.get_m()) && (A.get_n() != B.get_n())) return false;
  resize(A.get_m() = B.get_n());

  for(int j = 1; j <= m_; j++) 
    for(int i = 1; i <= n_; i++)
     { T aux = 0;
        for(int k = 1; k <= A.get_n(); k++) 
          aux = aux + A(i, k) * B(k, j);
        at(i, j) = aux,
    }
    return true; 
}


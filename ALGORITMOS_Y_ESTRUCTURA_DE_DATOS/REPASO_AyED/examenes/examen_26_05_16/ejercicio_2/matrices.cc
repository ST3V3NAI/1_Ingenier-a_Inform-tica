// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-11
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Ejercicios de exmane de matrices
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

  int cuenta_cero_TIND(double eps);
  int fila_max_DP(void);

  // Método de escritura y de lectura
  void write(ostream& = cout) const;
  void read(istream& = cin);

private:
// Atributos de clase matrix_t
  int m_, n_; // m_ filas y n_ columnconst matrix_t<T>& Aas
  vector_t<T> v_;
  
  int pos(const int, const int) const;
};

template<class T>
int cuenta_cero_TIND(double eps) {
  int cuenta = 0;

  for(int i = 2; i <= m_; i++)
    for(int j = 1; j <= i - 1; j++) 
      if(fabs(v_[pos(i, j)]) < eps)
        cuenta++;
    
  return cuenta; 
}

template<class T>
int fila_max_DP(void) {
  int max_inx = 1;
  int max_val = v_[pos(1, 1)];

  for(int i = 2; i <= m_; i++)
    if(v_[pos(i,i) > max_val]) {
      max_inx = i;
      max_val = v_[pos(i, i)];
    }
    return max_inx;
}



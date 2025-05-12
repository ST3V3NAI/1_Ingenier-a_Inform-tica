// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-12
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos de vectores de examenes
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

template<class T>
class vector_t
{
public:
// Constructor por defecto de la clase vector_t
  vector_t(const int = 0);
// Destructor de la clase vector_t 
  ~vector_t();
// Método para la longitud del vector
  void resize(const int);
  
  // getters
  T get_val(const int) const;
  int get_size(void) const;
  
  // setters
  void set_val(const int, const T);
  
  // getters-setters
  T& at(const int);
  T& operator[](const int);
  
  // getters constantes
  const T& at(const int) const;
  const T& operator[](const int) const;

  bool EsCapicua(const std::vector<int>& vec) const; 
  double scal_prod(const vector_t<double>& b);
  double vector_t<double>::scal_prod_r(const vector_t<double>& b, int i = 0); 
  int rsearch(const int* v, int i, int d, int x);

  // Métodos de escritura y lectura de la clase
  void write(ostream& = cout) const;
  void read(istream& = cin);

private:
    // Atributos de la clase 
  T *v_;
  int sz_;
  
  // Método que contruye 
  void build(void);
  // Método que destruye
  void destroy(void);
};

template<class T>
double vector_t<double>::scal_prod(const vector_t<double>& b) {
  assert(size() == b.size());
  T sp = 0; 
  for(int i = 0; i < size(); ++i) 
    sp += at(i) * b[i];
  return sp;
}

template<class T>
double vector_t<double>::scal_prod_r(const vector_t<double>& b, int i = 0) {
  assert(size() == b.size());
  if(i == size()) return 0;
  else return at(i) * b[i] + scal_prod_r(b, i + 1); 
}

template<class T>
int vector_t<T>::rsearch(const int* v, int i, int d, int x) {
  int c = -1;
  if(i <= d) {
      c = (i + d) / 2;
      if(v[c] != x) {
        const int c1 = rsearch(v, i, c - 1, x);
        const int c2 = rsearch(v, c + 1, d, x);
        c = max(c1, c2);
      }
  }
  return c; 
}

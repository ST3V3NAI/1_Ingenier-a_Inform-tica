// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-04
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN:  Impleméntese el método int rsearch(int i, int d, const T& x) 
// de la clase vector_t anteriormente especificada, que efectúa la búsqueda lineal
// recursiva en un vector no ordenado, devolviendo la posición del elemento encontrado y -1 si no lo encuentra.
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
 
template<class T>
class vector_t {
  public:
    vector_t(const int = 0);
    ~vector_t();
    void resize(const int);
    T get_val(const int) const;
    int get_size(void) const;
    void set_val(const int, const T);
    T& at(const int);
    T& operator[](const int);
    const T& at(const int) const;
    const T& operator[](const int) const;
    void write(std::ostream& = cout) const;
    void read(std::istream& = cin);
    int rsearch(int i, int d, const T& x);
  private:
    T *v_;
    int sz_;
    void build(void);
    void destroy(void);
};

template<class T>
int rsearch(int i, int d, const T& x) {
  int c = -1; 

  if(i <= d) {
    c = (i + d) / 2;
    if(v[c] != x) {
      const int c1 = rsearch(v, i, c - 1, x);
      const int c2 = rsearch(v, c + 1, d, x);
      c = max(c1, c2);
    }
  } 
  return c
}
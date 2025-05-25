// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-13
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos de examenes de vectores
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include <cassert>

using namespace std;

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
  bool is_pal(const vector_t& string, int left, int right);

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
bool is_pal(const vector_t& string, int left, int right){
  if(right - left < 1) return;
  return (string[left] == string[right])? is_pal(string, left + 1, right - 1) : false; 
}

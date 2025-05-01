// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-04-23
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº:  Impleméntese un procedimiento recursivo que genere todas 
// las cadenas binarias de longitud LENGTH correspondientes a números enteros pares. 
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include <vector>

using namespace std;

#define N_DIGITS 4

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

  // Métodos de escritura y lectura de la clase
  void write(ostream& os) const;
  void read(istream& = cin);

  void generate_all(void); 
  void generate(vector<int>& v, ostream& os);

private:
    // Atributos de la clase 
  T *v_;
  int sz_;
  
  // Método que contruye 
  void build(void);
  // Método que destruye
  void destroy(void);
};

void write(const vector<int>& v, ostream& os) {
  for(unsigned int i{0}; i < v.size(); ++i) 
    os << v[v.size() - i - 1];
  os << endl; 
}

void generate(vector<int>& v, ostream& os) {
  if (i < 1) write(number, cout);
  else
  { for(int b{0}; b < 2; b ++)
    { number[i] = b;
      generate(number, i - 1);
    }
  }
}

void generate_all(void) {
  vector<int> number(N_DIGITS);
  number[0] = 0;
  generate(number, N_DIGITS - 1);
}

int main() {
  generate_all();
  return 0;
}


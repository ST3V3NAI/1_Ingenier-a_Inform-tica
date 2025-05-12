// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-08
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Dado un tamaño n, y un objeto de clase vector_t<char> de 
// longitud n, se pide desarrollar un procedimiento recursivo en C++, con la
// siguiente cabecera:
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include <vector>
using namespace std; 

template<class T>
class vector_t {
  public: 
    vector_t(const int = 0);
    vector_t(const  vector_t<T>&);
    ~vector_t(void);

    void resize(const int);
    int get_size(void) const;
    T& at(const int);
    T& operator[](const int);
    T operator[](const int) const;
    vector_t<T>& operator=(const vector_t<T>&);

    void all_bin(vector_t<char>&, const int); 

    ostream& write(ostream& os = cout) const;
    istream& read(istream& is = cin);

  private: 
    T* base_;
    int n_;
    void build_(const int);
    void destroy_(void);
};


int main() {
  const int N = 4, i = 0;
  vector_t<char> dummy;
  vector_t<char> binario(3);
  binario.all_bin(binario);
}

template<class T>
void vector_t<T>::all_bin(vector_t<char>& binario, const int i = 0) {
  if(i == binario.get_size()) {
    binario.write(std::cout);
    std::cout << " ";
  }
  else {
    binario[i] == '0';
    all_bin(binario, i + 1);
    binario[i] == '1';
    all_bin(binario, i + 1);
  }
}
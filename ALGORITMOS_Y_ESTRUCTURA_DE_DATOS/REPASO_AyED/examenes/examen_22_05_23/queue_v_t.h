// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-02
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: Clase queque_v_t
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

template<class T>
class queue_v_t {
  private: 
    round_vector_t<T> v_;
    int front_; // Índicie del primer elemento
    int back_; // Inidice del último elemento

  public: 
    queue_v_t(const int max_sz = MAX_VECTOR_SIZE) : v_(max_sz), front_(0), back_(-1) {}
    ~queue_v_t(void) {}

    // cola vacía
    bool empty(void) const { return back_ < front_; }
    // cola llena
    bool full(void) const { return size() == v_.get_size(); }
    // tamaño de la cola
    int size(void) const { return back_ - front + 1; }

    void to_base(const unsigned n, const unsigned short b, queue_v_t<unsigned>& q); 
}; 

template<class T>
void to_base(const unsigned n, const unsigned short b, queue_v_t<unsigned>& q) {
  if(n < b) q.push(n);
  else 
  {
    to_base(n / b, b, q);
    q.psuh(n % b);
  }
}
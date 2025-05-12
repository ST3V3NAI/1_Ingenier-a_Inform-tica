// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-02
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: Clase sll_node_t
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

template <class T>
class sll_node_t {
  private: 
    sll_node_t<T>* next_;
    T              data_;

  public: 
    sll_node_t(void);
    sll_node_t(const T& data);
    ~sll_node_t(void);

    void set_next(sll_node_t<T>* next);
    sll_node_t<T>* get_next(void) const; 

    ostream& write(ostream& os) const; 
};


// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-02
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: Clase sll_t
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

template<class T>
class sll_t {
  private: 
    sll_node_t<T>* head_;

  public: 
    sll_t(void);
    virtual ~sll_t(void);

    void insert_head(sll_node_t<T>* n);
    sll_node_t<T>* extract_head(void);
    sll_node_t<T>* get_head(void) const;

    void insert_after(sll_node_t<T>* pred, sll_node_t<T>* n);
    sll_node_t<T>* extract_after(sll_node_t<T>* pred);

    bool empty(void) const;
    void write(ostream& os) const; 

    sll_node_t<T>* search(const T& d) const; 
};


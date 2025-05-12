// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-11
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos de examen de matrices
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

  // Apratados del examen


  // Método de escritura y de lectura
  void write(ostream& = cout) const;
  void read(istream& = cin);

private:
// Atributos de clase matrix_t
  int m_, n_; // m_ filas y n_ columnconst matrix_t<T>& Aas
  vector_t<T> v_;
  
  int pos(const int, const int) const;
};


// Compruba que todos los elementos de la diagonal 
// principal son 1. 
template<class T>
bool is_reflexive(void) 
{ bool is_ref = true;
  int i = 1;

  while((is_ref == true) && (i <= get_m())) {
    if(get(i,i) != 1) 
      is_ref = false;
    i++;
  }
  return is_ref;
}

template<class T>
bool is_ireflexive(void)
{ bool is_iref = true;
  int i = 1;

  while((is_iref == true) && (i <= get_m())) {
    if(get(i, i) != 0) 
      is_iref = false;
    i++;
  } 
  return is_iref;
}

template<class T>
bool is_symmetric(void) 
{ bool is_symm = true;
  int i = 2;

  while((is_symm == true) && (i <= get_m())) {
    int j = 1;
      while((is_symm == true) && (j < i - 1)) {
        if(at(i, j) != at(j, i))
          is_symm = false;
        j++;
     }
     i++;
  }
  return is_sym;
}

template<class T>
bool is_anti_symmetric(void) 
{ bool not_symm = true;
  int i = 2;

  while((not_symm == true) && (i <= get_m())) {
    int j = 1;
      while((not_symm == true) && (j < i - 1)) {
        if(at(i, j) == at(j, i) == 1)
          not_symm = false;
        j++;
     }
     i++;
  }
  return is_sym;
}

template<class T>
bool is_transitive(void)
{ bool is_tran = true;
  int i = 1;

  while ((is_tran == true) && (i <= get_m())) {
    int j = 1;
    while ((is_tran == true) && (j <= get_n())) {
      int k = 1;
      bool is_tran_a = (get(i,j) == 1);
      while ((is_tran_a == true) && (is_tran == true) && (k <= get_n())) {
        if ((get(j,k) == 1) && (get(i,k) == 0))
          is_tran = false;
        k++;
      }
    j++;
  }
  i++;
 } 
 return is_tran;
}

template<class T>
bool is_func(void) 
{ bool is_fun = true;
  int i = 1;

  while((is_fun == true) && (i <= get_m())) {
    int sum_row = 0;
    for(int = get_n(); j >= 1; j--)
      sum_row += get(i, j);

    if(sum_row != 1)
      is_fun = false;
    i++;
  }
  return is_fun;    
}

template<class T>
bool is_inyec(void) 
{ bool is_iny = true;
  int j = 1;

  while((is_iny == true) && (j <= get_n())) {
    int sum_col = 0;
    for(int i = get_m(); i >= 1; i--) 
      sum_col += get(i, j);

    if(sum_col > 1)
      is_iny = false;
    j++;
  }

  return is_func() && is_iny;
}




#include <iostream>
#include <string>
#include <vector>

class Libro{
  public:

  // Constructor de la clase libro
  Libro(const std::string& titulo, const std::string& autor, int anioPublicacion) : titulo_(titulo), autor_(autor), anioPublicacion_(anioPublicacion) {}

  // Métodos para la clase libro

  void mostrarInformacion() const {
      std::cout << "Titulo: " << titulo_ << std::endl;
      std::cout << "Autor: " << autor_ << std::endl;
      std::cout << "Año de publicación: " << anioPublicacion_ << std::endl;
  }

  private:
    std::string titulo_;
    std::string autor_;
    int anioPublicacion_;
};



int main() {
Libro libros[3] = { 
    Libro("Cien años de soledad", "Gabriel García Márquez", 1967),
    Libro("Don Quijote de la Mancha", "Miguel de Cervantes", 1605),
    Libro("El principito", "Antoine de Saint-Exupéry", 1943)
};

  for (int i = 0; i < 3; i++) {
    libros[i].mostrarInformacion();
  }

}
